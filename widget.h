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
    Widget(int flag = 1, QWidget *parent = nullptr);
    ~Widget();
    void makePlot();
    int getFlag()
    {
        return myflag;
    }


private slots:

    void on_downloadButton_clicked();

    void on_addErrorsButton_clicked();

private:
    int myflag;
    Ui::Widget *ui;
};
#endif // WIDGET_H
