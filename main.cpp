#include "widget.h"

#include <QApplication>
#include <QLabel>
#
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    // QLabel *label = new QLabel("ПРИВЕТ!");
    // label->resize(400, 400);
    // label->show();

    return a.exec();
}


