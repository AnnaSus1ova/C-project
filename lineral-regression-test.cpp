#include <iostream>
#include <vector>
#include "lineral-regression.h"

int main() {
    // Пример данных для X и Y
    const std::vector<double> x = {1.0, 2.0, 3.0, 4.0, 5.0};
    const std::vector<double> y = {2.0, 2.5, 3.5, 3.9, 5.0};

    // Создание объекта LinearRegression
    LinearRegression lr(x, y);

    //lr.fit(x, y);

    // Получение коэффициентов
    double k = lr.getK();
    double b = lr.getB();

    // Вывод результатов
    std::cout << "Коэффициент наклона (k): " << k << std::endl;
    std::cout << "Свободный член (b): " << b << std::endl;

    return 0;
}

