#ifndef IDLE_H
#define IDLE_H

#include <QThread>

class idle : public QThread
{
    Q_OBJECT
protected:
    void run();
private:
    void doIdle();
};

#endif // IDLE_H
