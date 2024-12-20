#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H
#include <vector>
#include "regression.h"

class LinearRegression : public Regression
{
public:

    LinearRegression() = default;

    // Конструктор с параметрами
    LinearRegression(const std::vector<double>& x, const std::vector<double>& y);
    
    ~LinearRegression() override;


    // Методы для получения коэффициентов
    std::vector<double> get_coeff() const override;
};

#endif // LINEARREGRESSION_H

