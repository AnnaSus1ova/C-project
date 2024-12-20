#include <iostream>
#include <vector>
#include "regression.h"

Regression::Regression(const std::vector<double>& x, const std::vector<double>& y){
}

Regression::~Regression(){}


std::vector<double> Regression::get_coeff() const {
    return coeff;
}

