#include <iostream>
#include "Vector.h"
#include <vector>

Vector_2d::Vector_2d(){}

Vector_2d::Vector_2d(std::vector<double> _abscissa, std::vector<double> _ordinate){
    try{
        if (_abscissa.size() != _ordinate.size())
            throw std::invalid_argument("Different number of abscissas and ordinates");
        abscissa = _abscissa;
        ordinate = _ordinate;
    }
    catch (std::invalid_argument){
        std::cout << "Different number of abscissas and ordinates" << std::endl;
    }
}

Vector_2d::Vector_2d(const Vector_2d& rhs) {
	abscissa = rhs.abscissa;
	ordinate = rhs.ordinate;
}

Vector_2d::Vector_2d(Vector_2d&& rhs) {
	abscissa = rhs.abscissa;
	ordinate = rhs.ordinate;
    rhs.abscissa.clear();
    rhs.ordinate.clear();
}

Vector_2d::~Vector_2d(){}

std::vector<double> Vector_2d::get_abscissa(){
    return abscissa;
}

std::vector<double> Vector_2d::get_ordinate(){
    return ordinate;
}

void Vector_2d::set_abscissa(std::vector<double> _abscis){
    abscissa = _abscis;
}

void Vector_2d::set_ordinate(std::vector<double> _ordin){
    ordinate = _ordin;
}