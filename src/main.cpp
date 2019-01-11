
#include <QDebug>
#include <QCoreApplication>
#include <QSerialPort>

#include <signal.h>
#include <unistd.h>

#include "include/imuhandler.h"

IMUHandler *imuHandler;

void catchUnixSignals(std::initializer_list<int> quitSignals) {
    auto handler = [](int sig) -> void {
        // blocking and not aysnc-signal-safe func are valid
        printf("\nquit the application by signal(%d).\n", sig);
        QCoreApplication::quit();
    };

    sigset_t blocking_mask;
    sigemptyset(&blocking_mask);
    for (auto sig : quitSignals)
        sigaddset(&blocking_mask, sig);

    struct sigaction sa;
    sa.sa_handler = handler;
    sa.sa_mask    = blocking_mask;
    sa.sa_flags   = 0;

    for (auto sig : quitSignals)
        sigaction(sig, &sa, nullptr);
}

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    imuHandler = new IMUHandler( &a );

    catchUnixSignals({SIGQUIT, SIGINT, SIGTERM, SIGHUP});

    return a.exec();
}
