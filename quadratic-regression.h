#ifndef QUADRATICRESSION_H
#define QUADRATICGRESSION_H
#include <vector>

class QuadraticRegression 
{
private:
    double a;
    double b;
    double c; 

public:

    QuadraticRegression() = default;

    // Конструктор с параметрами
    QuadraticRegression(const std::vector<double>& x, const std::vector<double>& y);

    ~QuadraticRegression();

    // Метод для подгонки модели
    //void fit(const std::vector<double>& x, const std::vector<double>& y);

    // Методы для получения коэффициентов
    double getA() const;
    double getB() const;
    double getC() const;

};

#endif // QUADRATICREGRESSION_H

