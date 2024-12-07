#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Widget::makePlot();
}


Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    // Сделать скачивание файла
}


void Widget::on_checkBox_2_stateChanged(int arg1)
{
    // Добавление сетки
}


void Widget::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    // Добавление погрешностей к графику
}

void Widget::makePlot()
{
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; // x goes from -1 to 1
        y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    ui->chartwidget->addGraph();
    ui->chartwidget->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->chartwidget->xAxis->setLabel("x");
    ui->chartwidget->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->chartwidget->xAxis->setRange(-1, 1);
    ui->chartwidget->yAxis->setRange(0, 1);
    ui->chartwidget->replot();
}

