#include "ThreadManager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ThreadManager w;
    w.show();
    return a.exec();
}
