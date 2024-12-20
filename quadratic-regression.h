#ifndef QUADRATICRESSION_H
#define QUADRATICGRESSION_H
#include <vector>
#include "regression.h"

class QuadraticRegression : public Regression
{
private:
    std::vector<double> coeff;

public:

    QuadraticRegression() = default;

    // Конструктор с параметрами
    QuadraticRegression(const std::vector<double>& x, const std::vector<double>& y);

    ~QuadraticRegression() override;


    // Методы для получения коэффициентов
    std::vector<double> get_coeff() const override;

};

#endif // QUADRATICREGRESSION_H

