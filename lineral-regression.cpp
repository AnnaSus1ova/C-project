// График имеет вид y = k*x + b

#include <iostream>
#include <vector>
#include "Data.h"

double k = 0;      // Коэффициент наклона
double b = 0;  // Смещение

void fit(const std::vector<double>& x, const std::vector<double>& y) {
    int n = x.size();
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // Вычисляем коэффициенты
    k = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    b = (sum_y - k * sum_x) / n;
}

int main() {
    // ВМЕСТО X_TRAIN И Y_TRAIN НЕОБХОДИМО БУДЕТ ПЕРЕДАВАТЬ VECTOR_2D С ДАННЫМИ X И Y
    // std::vector<double> x_train = {1.0, 2.0, 3.0, 4.0, 5.0};
    // std::vector<double> y_train = {2, 4, 6, 8, 10};



    fit(Data.get_abscissa(), Data.get_ordinate());
    
    std::cout << "k: " << k << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}
