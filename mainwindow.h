#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regression.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum class type_regression;

std::unique_ptr<Regression> create_regression(type_regression t);

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Error_clicked();

    void on_question_clicked();

    void on_AddFile1_clicked();

    void on_AddFile2_clicked();

    void on_Graph1_clicked();

    void on_Graph2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
