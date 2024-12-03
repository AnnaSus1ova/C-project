#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include "errors.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/my-background.png");

    ui->picture->setPixmap(pix);


    MeasurementError AV{std::vector<double> (5)};
    MeasurementError AME{std::vector<double> (5)};

    QString AMEString = QString::number(AME.average_measurement_error());
    ui->ShowError_1->insertPlainText(QString(AMEString));

    QString AVString = QString::number(AV.average_value());
    ui->ShowError_2->insertPlainText(QString(AVString));
}

MainWindow::~MainWindow()
{
    delete ui;
}
