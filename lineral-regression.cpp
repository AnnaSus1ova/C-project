#include <iostream>
#include <vector>
//#include "Data.h"
#include "lineral-regression.h"


LinearRegression::LinearRegression(const std::vector<double>& x, const std::vector<double>& y)
    : k{0}, b{0} {
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
    std::cout << b;
}


// void LinearRegression::fit(const std::vector<double>& x, const std::vector<double>& y) {
//     int n = x.size();
//     double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;

//     for (int i = 0; i < n; i++) {
//         sum_x += x[i];
//         sum_y += y[i];
//         sum_xy += x[i] * y[i];
//         sum_x2 += x[i] * x[i];
//     }

//     // Вычисляем коэффициенты
//     k = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
//     b = (sum_y - k * sum_x) / n;
// }

double LinearRegression::getK() const {
    return k;
}

double LinearRegression::getB() const {
    return b;
}
