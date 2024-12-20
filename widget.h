#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "Data.h"
#include "quadratic-regression.h"
#include "lineral-regression.h"
#include "errors.h"
#include <vector>
#include <algorithm>
#include <QFile>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QDialog
{
    Q_OBJECT

public:
    Widget(std::vector<double> coeff, QWidget *parent = nullptr);
    ~Widget();
    void makePlot();


private slots:

    void on_downloadButton_clicked();

    void on_addErrorsButton_clicked();

private:
    std::vector<double> my_coeff;
    Ui::Widget *ui;
};
#endif // WIDGET_H
