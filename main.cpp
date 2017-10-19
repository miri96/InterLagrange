#include "ilagrange.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ILagrange w;
    w.show();

    return a.exec();
}
