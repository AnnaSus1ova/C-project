#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H
#include <vector>

class LinearRegression 
{
private:
    double k; // Коэффициент наклона
    double b; // Смещение

public:


    LinearRegression() = default;

    // Конструктор с параметрами
    LinearRegression(const std::vector<double>& x, const std::vector<double>& y);

    // Метод для подгонки модели
    //void fit(const std::vector<double>& x, const std::vector<double>& y);

    // Методы для получения коэффициентов
    double getK() const;
    double getB() const;
};

#endif // LINEARREGRESSION_H

