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

    // std::vector<double> abscissa_values = Data.get_abscissa();
    // std::vector<double> ordinate_values = Data.get_ordinate();

    std::vector<double> abscissa_values = {1, 2, 3, 4, -5}; // test values then delete, use code under
    std::vector<double> ordinate_values = {8, -2, 1.2, 8, 15}; //then delete, use code under
    const size_t count_of_points = abscissa_values.size();


    QVector<double> x(count_of_points), y(count_of_points); // initialize with entries 0..100
    for (int i=0; i<count_of_points; ++i)
    {
        x[i] = abscissa_values[i];
        y[i] = ordinate_values[i];
    }

    // create graph and assign data to it:
    ui->chartwidget->addGraph();
    ui->chartwidget->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->chartwidget->xAxis->setLabel("x");
    ui->chartwidget->yAxis->setLabel("y");

    // find ranges of values
    double x_min = *std::min_element(abscissa_values.begin(), abscissa_values.end());
    double x_max = *std::max_element(abscissa_values.begin(), abscissa_values.end());
    double y_min = *std::min_element(ordinate_values.begin(), ordinate_values.end());
    double y_max = *std::max_element(ordinate_values.begin(), ordinate_values.end());

    // std::fit(abscissa_values, ordinate_values)

    // set axes ranges, so we see all data:
    ui->chartwidget->xAxis->setRange(x_min - 0.1 * (x_max-x_min), x_max + 0.1 * (x_max-x_min));
    ui->chartwidget->yAxis->setRange(y_min - 0.1 * (y_max-y_min), y_max + 0.1 * (y_max-y_min));
    ui->chartwidget->replot();
}

