#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/img/my-background.png");

    ui->picture->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}
