#include <iostream>
#include "Vector.h"
#include "vector.pb.h"
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

void Vector_2d::save_to_file(const std::string& filename) const {
    vector_data::Data data;

    auto* vector = data.mutable_vector();
    for (double x : abscissa) {
        vector->add_abscissa(x);
    }
    for (double y : ordinate) {
        vector->add_ordinate(y);
    }

    std::ofstream output(filename, std::ios::binary);
    data.SerializeToOstream(&output);
}

void Vector_2d::load_from_file(const std::string& filename) {
    vector_data::Data data;

    std::ifstream input(filename, std::ios::binary);
    if (!data.ParseFromIstream(&input)) {
        throw std::runtime_error("Failed to parse the file");
    }

    const auto& vector = data.vector();
    abscissa.clear();
    ordinate.clear();
    for (double x : vector.abscissa()) {
        abscissa.push_back(x);
    }
    for (double y : vector.ordinate()) {
        ordinate.push_back(y);
    }
}