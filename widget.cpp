#include "widget.h"
#include "./ui_widget.h"
#include "stdio.h"

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


void Widget::on_checkBox_2_stateChanged(int arg1)
{
    // Добавление сетки
}


void Widget::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    // Добавление погрешностей к графику
}

auto find_range(std::vector<double> &values) {
    double min_el = values[0];
    double max_el = values[0];
    for (int i = 0; i < values.size(); i++) {
        if (values[i] < min_el) min_el = values[i];
        else if (values[i] > max_el) max_el = values[i];
    }
    std::tuple<double, double> res {min_el - 1, max_el + 1};
    return res;
}



void Widget::makePlot()
{

    std::vector<double> abscissa_values = Data.get_abscissa();
    std::vector<double> ordinate_values = Data.get_ordinate();
    const size_t count_of_points = abscissa_values.size();


    MeasurementError errors(ordinate_values);
    QVector<double> x_err(count_of_points);
    QVector<double> y_err(count_of_points);
    double err_abs = errors.average_measurement_error_abscissa();
    double err_ord = errors.average_measurement_error_ordinate();
    QCPErrorBars *errorBars = new QCPErrorBars(ui->chartwidget->xAxis, ui->chartwidget->yAxis);
    QCPErrorBars *errorBars2 = new QCPErrorBars(ui->chartwidget->yAxis, ui->chartwidget->xAxis);


    QVector<double> x(count_of_points), y(count_of_points);
    for (int i=0; i<count_of_points; ++i)
    {
        x[i] = abscissa_values[i];
        y[i] = ordinate_values[i];
        x_err[i] = err_abs;
        y_err[i] = err_ord;
    }


    // give the axes some labels:
    ui->chartwidget->xAxis->setLabel("x");
    ui->chartwidget->yAxis->setLabel("y");


    // find ranges of values
    double x_min = *std::min_element(abscissa_values.begin(), abscissa_values.end());
    double x_max = *std::max_element(abscissa_values.begin(), abscissa_values.end());
    double y_min = *std::min_element(ordinate_values.begin(), ordinate_values.end());
    double y_max = *std::max_element(ordinate_values.begin(), ordinate_values.end());


    // точки графика
    ui->chartwidget->addGraph(ui->chartwidget->xAxis, ui->chartwidget->yAxis);
    ui->chartwidget->graph(0)->setPen(QColor(255, 0, 0, 255));
    ui->chartwidget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->chartwidget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));
    ui->chartwidget->graph(0)->setData(x, y);
    errorBars->setDataPlottable(ui->chartwidget->graph(0));
    errorBars->setData(y_err);
    errorBars2->setDataPlottable(ui->chartwidget->graph(0));
    errorBars2->setData(x_err);


    // Линейная регрессия
    LinearRegression regression(abscissa_values, ordinate_values);
    double k = regression.getK();
    double b = regression.getB();
    QVector<double> x1 = {x_min, x_max};
    QVector<double> y1 = {x_min * k + b, x_max * k + b};


    // // Квадратичная регрессия
    // QuadraticRegression regression(abscissa_values, ordinate_values);
    // double a = regression.getA();
    // double b = regression.getB();
    // double c = regression.getC();

    // QVector<double> x1(512), y1(512);
    // for (int i=0; i < 512 ; ++i)
    // {
    //     x1[i] = x_min + (x_max - x_min) * i / 512;
    //     y1[i] = a * x1[i] * x1[i] + b * x1[i] + c;
    // }


    ui->chartwidget->addGraph();
    ui->chartwidget->graph(1)->setData(x1, y1);
    ui->chartwidget->graph(1)->setPen(QPen(QColor(120, 120, 120), 2));

    std::printf("k=%.2lf b=%.2lf", k, b);
    std::printf("error_ordinate=%.2lf error_abscissa=%.2lf", errors.average_measurement_error_ordinate(), errors.average_measurement_error_abscissa());


    // set axes ranges, so we see all data:
    ui->chartwidget->xAxis->setRange(x_min - 0.1 * (x_max-x_min), x_max + 0.1 * (x_max-x_min));
    ui->chartwidget->yAxis->setRange(y_min - 0.1 * (y_max-y_min), y_max + 0.1 * (y_max-y_min));
    ui->chartwidget->replot();
}



void Widget::on_downloadButton_clicked()
{
    QString dirName = QFileDialog::getSaveFileName(this, "Choose location");
    QFile file(dirName);

    if (!file.open(QIODevice::WriteOnly))
        {
            qDebug() << file.errorString();
        } else {
            ui->chartwidget->savePng(dirName);
        }

}

