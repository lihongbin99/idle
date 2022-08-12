#include "idle.h"

#include <windows.h>
#include <powersetting.h>
#include <powrprof.h>

#pragma comment(lib, "PowrProf.lib")

#include <QDebug>

void idle::run() {
    while (true) {
        doIdle();
        QThread::sleep(1);
    }
}

void idle::doIdle() {
    qDebug() << "test";
}
