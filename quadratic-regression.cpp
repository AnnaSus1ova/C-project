// График имеет вид y = a * x^2 + b * x + c

#include <iostream>
#include <vector>
#include "Data.h"
#include "quadratic-regression.h"

// Функция для расчета коэффициентов a, b, c
QuadraticRegression::QuadraticRegression(const std::vector<double>& x, const std::vector<double>& y)
: a{0}, b{0}, c{0} {
    int n = x.size();
    if (n < 3) {
        throw std::runtime_error("Not enough data points.");}
    
    double sumX = 0, sumY = 0, sumX2 = 0, sumX3 = 0, sumX4 = 0, sumXY = 0, sumX2Y = 0;

    for (int i = 0; i < n; ++i) {
        sumX += x[i];
        sumY += y[i];
        sumX2 += x[i] * x[i];
        sumX3 += x[i] * x[i] * x[i];
        sumX4 += x[i] * x[i] * x[i] * x[i];
        sumXY += x[i] * y[i];
        sumX2Y += x[i] * x[i] * y[i];
    }

    // Составляем систему линейных уравнений
    double A[3][3] = {
        {sumX4, sumX3, sumX2},
        {sumX3, sumX2, sumX},
        {sumX2, sumX, n}
    };

    double B[3] = {sumX2Y, sumXY, sumY};

    // Решение системы уравнений методом Гаусса
    for (int i = 0; i < 3; ++i) {
        // Нормализация строки
        double denom = A[i][i];
        for (int j = i; j < 3; ++j) {
            A[i][j] /= denom;
        }
        B[i] /= denom;

        // Вычитание других строк
        for (int j = 0; j < 3; ++j) {
            if (j != i) {
                double factor = A[j][i];
                for (int k = i; k < 3; ++k) {
                    A[j][k] -= factor * A[i][k];
                }
                B[j] -= factor * B[i];
            }
        }
    }

    // Коэффициенты квадратичной регрессии
    a = B[0];
    b = B[1];
    c = B[2];

    }

    
double QuadraticRegression::getA() const {
    return a;
}

double QuadraticRegression::getB() const {
    return b;
}

QuadraticRegression::~QuadraticRegression(){}


double QuadraticRegression::getC() const {
    return c;
}
