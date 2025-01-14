#include <iostream>
#include "Vector.h"
#include <vector>

Vector_2d::Vector_2d(){}

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
