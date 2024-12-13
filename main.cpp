#include "widget.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    std::vector<double> values1 = {3, 6, 8, 11, 13, 16, 19, 21}; // test values for lineral
    std::vector<double> values2 = {3, 6, 9, 12, 15, 18, 21, 24};

    // std::vector<double> values1 = {183, 168, 171, 178, 176, 172, 165, 158}; // test values for quadratic
    // std::vector<double> values2 = {3, 6, 9, 12, 15, 18, 21, 24};

    Data.set_abscissa(values1);
    Data.set_ordinate(values2);

    Widget w;
    w.show();

    return a.exec();
}


