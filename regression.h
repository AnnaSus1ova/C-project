#ifndef REGRESSION_H
#define REGRESSION_H
#include <vector>

class Regression
{
private:
    std::vector<double> coeff;

public:
    Regression() = default;

    // Конструктор с параметрами
    Regression(const std::vector<double>& x, const std::vector<double>& y);
    
    virtual ~Regression();

    // Методы для получения коэффициентов
    virtual std::vector<double> get_coeff() const;
};

#endif // REGRESSION_H

