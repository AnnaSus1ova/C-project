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

    std::vector<double> ordinate_values = {3, 6, 8, 11, 13, 16, 19, 21}; // test values then delete, use code under
    std::vector<double> abscissa_values = {3, 6, 9, 12, 15, 18, 21, 24}; //then delete, use code under
    const size_t count_of_points = abscissa_values.size();
    // QVector<QCPGraphData> timeData(count_of_points);


    QVector<double> x(count_of_points), y(count_of_points); // initialize with entries 0..100
    for (int i=0; i<count_of_points; ++i)
    {
        x[i] = abscissa_values[i];
        y[i] = ordinate_values[i];
        // timeData[i].key = abscissa_values[i] + 1;
        // timeData[i].value = ordinate_values[i] + 1;
    }

    // create graph and assign data to it:
    ui->chartwidget->addGraph();
    ui->chartwidget->graph(0)->setData(x, y);


    // ui->chartwidget->graph()->data()->set(timeData);

    // give the axes some labels:
    ui->chartwidget->xAxis->setLabel("x");
    ui->chartwidget->yAxis->setLabel("y");

    // find ranges of values
    double x_min = *std::min_element(abscissa_values.begin(), abscissa_values.end());
    double x_max = *std::max_element(abscissa_values.begin(), abscissa_values.end());
    double y_min = *std::min_element(ordinate_values.begin(), ordinate_values.end());
    double y_max = *std::max_element(ordinate_values.begin(), ordinate_values.end());

    // ЛИНЕЙНЫЙ ГРАФИК
    // std::fit(abscissa_values, ordinate_values)
    double k = 0.86;
    double b = 0.50;
    QVector<double> x1 = {x_min, x_max};
    QVector<double> y1 = {x_min * k + b, x_max * k + b};

    // регрессия
    QCPGraph *graph1 = ui->chartwidget->addGraph();
    graph1->setData(x1, y1);
    graph1->setPen(QPen(QColor(120, 120, 120), 2));

    // точки графика
    ui->chartwidget->addGraph(ui->chartwidget->yAxis2, ui->chartwidget->xAxis2);
    ui->chartwidget->graph(0)->setPen(QColor(255, 0, 0, 255));
    ui->chartwidget->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui->chartwidget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 5));
    // ui->chartwidget->graph(0)->setName("Some random data around\na quadratic function");
    ui->chartwidget->graph(0)->setData(x, y);

    // QCPGraph *points = ui->chartwidget->addGraph();
    // points->setData(x, y);
    // points->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, QPen(Qt::black, 1.5), QBrush(Qt::white), 9));
    // points->brush();
    // points->setPen(QPen(QColor(120, 120, 120), 2));



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

