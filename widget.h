#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "Data.h"
#include "quadratic-regression.h"
#include "lineral-regression.h"
#include "errors.h"
#include <vector>
#include <tuple>
#include <algorithm>
#include <QFile>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_checkStateChanged(const Qt::CheckState &arg1);

    void makePlot();

    void on_downloadButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
