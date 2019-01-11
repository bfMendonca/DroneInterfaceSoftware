#ifndef IMUHANDLER_H
#define IMUHANDLER_H

#include <QObject>

class IMUHandler : public QObject
{
    Q_OBJECT
public:
    explicit IMUHandler(QObject *parent = nullptr);

signals:

public slots:
};

#endif // IMUHANDLER_H