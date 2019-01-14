#ifndef IMUHANDLER_H
#define IMUHANDLER_H

#include <QDebug>
#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>

class IMUHandler : public QObject
{
    Q_OBJECT
public:
    explicit IMUHandler(QObject *parent = nullptr);
    virtual ~IMUHandler();

signals:

public slots:

private slots:
    void dataReceived();
    void pwmTimerOverflow();

private:
    QSerialPort m_serialPort;
    QByteArray m_inputBuffer;

    QTimer m_pwmTimer;
};

#endif // IMUHANDLER_H
