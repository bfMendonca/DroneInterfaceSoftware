#include "include/imuhandler.h"

#include "messages/hmc5983.pb.h"
#include "messages/mpu6500.pb.h"
#include "messages/motorsinterface.pb.h"

IMUHandler::IMUHandler(QObject *parent) : QObject(parent)
  , m_serialPort( )
  , m_inputBuffer( )
  , m_pwmTimer( this )
{
    QList< QSerialPortInfo > availableDevices = QSerialPortInfo::availablePorts();
    QSerialPortInfo toOpenPort;

    m_inputBuffer.reserve( 300 );

    qDebug() << "Listing available ports";
    foreach (const QSerialPortInfo & port, availableDevices ) {
        if( port.portName() == "ttyACM0" ) {
            toOpenPort = port;
        }
        qDebug() << port.portName();
    }

    m_serialPort.setPort( toOpenPort );
    m_serialPort.setParity( QSerialPort::NoParity );
    m_serialPort.setBaudRate( 1000000 );
    m_serialPort.setDataBits( QSerialPort::Data8 );
    m_serialPort.setFlowControl( QSerialPort::NoFlowControl );
    m_serialPort.setStopBits( QSerialPort::OneStop );

    if( m_serialPort.open( QSerialPort::ReadWrite ) ) {
        qDebug() << "Port oppened";
        connect( &m_serialPort, &QSerialPort::readyRead, this, &IMUHandler::dataReceived );
    }else {
        m_serialPort.close();

        qFatal("Error oppening port.");
    }


    m_pwmTimer.setInterval( 2000 );
    connect( &m_pwmTimer, &QTimer::timeout, this, &IMUHandler::pwmTimerOverflow );
    m_pwmTimer.start();


}

IMUHandler::~IMUHandler()
{
    m_serialPort.close();
}

void IMUHandler::dataReceived()
{
    QByteArray start;
    start.append( 0xAA );
    start.append( 0xBB );
    start.append( 0xCC );

    QByteArray end;
    end.append( "*FIM\0");

    m_inputBuffer.append( m_serialPort.readAll() );
    while( m_inputBuffer.contains( start ) & m_inputBuffer.contains( end ) ) {

        int startIndex = m_inputBuffer.indexOf( start );
        int endIndex = m_inputBuffer.indexOf( end );

        if( endIndex < startIndex ) {
            m_inputBuffer.remove(0, startIndex );
            qCritical() << "Opa 12321";
            break;
        }

        int type = m_inputBuffer.at( startIndex + 3 );

        if( type == 0x01 ) {
            MPU6500Readings mpu;
            bool statusMpu = mpu.ParseFromArray( m_inputBuffer.constData()+startIndex + 4, ( endIndex - startIndex ) - 4 );
            if( statusMpu ) {
                qCritical()    <<    "accel x: " <<        QString::number(mpu.accelerometer().x(), 'f', 3 )
                               << " \taccel y: " <<     QString::number(mpu.accelerometer().y(), 'f', 3 )
                               << " \taccel z: " <<     QString::number(mpu.accelerometer().z(), 'f', 3 )
                               << " \tgyro z: " <<      QString::number(mpu.gyroscope().x(), 'f', 3 )
                               << " \tgyro z: " <<      QString::number(mpu.gyroscope().y(), 'f', 3 )
                               << " \tgyro z: " <<      QString::number(mpu.gyroscope().z(), 'f', 3 )
                               << " \ttemperature: " << QString::number(mpu.temperature(), 'f', 3 )
                               << " \ttimestamp: " << mpu.timestamp();
                m_inputBuffer.remove( startIndex, ( endIndex - startIndex ) + 5 );
            }else {
                m_inputBuffer.remove( 0, endIndex + 5 );
            }
        }else if( type == 0x02 ) {
            HMC5983Readings mag;
            bool statusMag = mag.ParseFromArray( m_inputBuffer.constData()+startIndex + 4, ( endIndex - startIndex ) - 4 );
            if( statusMag ) {
                qCritical() <<    "mag x: " <<          QString::number(mag.magnetometer().x(), 'f', 3 )
                               << " \tmag y: " <<       QString::number(mag.magnetometer().y(), 'f', 3 )
                               << " \tmag z: " <<       QString::number(mag.magnetometer().z(), 'f', 3 )
                               << " \ttemperature: " << QString::number(mag.temperature(), 'f', 3 )
                               << " \ttimestamp: " << mag.timestamp();

                m_inputBuffer.remove( startIndex, ( endIndex - startIndex ) + 5  );
            }else {
                m_inputBuffer.remove( 0, endIndex + 5 );
            }
        }else {
            m_inputBuffer.clear();
            break;
        }
    }

    if( m_inputBuffer.contains( end ) && !m_inputBuffer.contains( start ) ) {
        m_inputBuffer.clear();
    }
}

void IMUHandler::pwmTimerOverflow()
{
    qCritical() << "OI";
    QByteArray array(50, '\0');

    MotorsInterfaceMessage motorsMessage;

    static uint8_t counter = 0x00;

    if( ++counter == 0x99 ) {
        counter = 0x00;
    }

    motorsMessage.set_motor1dc( counter );
    motorsMessage.set_motor2dc( counter );
    motorsMessage.set_motor3dc( counter );
    motorsMessage.set_motor4dc( counter );

    size_t size = motorsMessage.ByteSize();
    void *buffer = malloc(size);
    motorsMessage.SerializeToArray(buffer, size);
    memcpy( array.data()+4, buffer, size );

    array[0] = 0xAA;
    array[1] = 0xBB;
    array[2] = 0xCC;
    array[3] = 0x99;

    array[ static_cast< int> ( 4+size ) ] = '*';
    array[ static_cast< int> ( 5+size ) ] = 'F';
    array[ static_cast< int> ( 6+size ) ] = 'I';
    array[ static_cast< int> ( 7+size ) ] = 'M';

    m_serialPort.write( array );
}
