#pragma once
#include <vector>

class Vector_2d{
    std::vector<double> abscissa;
    std::vector<double> ordinate;
public:
    Vector_2d(std::vector<double> _abscissa, std::vector<double> _ordinate);
    Vector_2d(const Vector_2d& rhs);
    Vector_2d(Vector_2d&& rhs);
    ~Vector_2d();
    std::vector<double> get_abscissa();
    std::vector<double> get_ordinate();
};