#pragma once
#include <vector>

class Vector_2d{
    std::vector<double> abscissa;
    std::vector<double> ordinate;
public:
    Vector_2d();
    Vector_2d(const Vector_2d& rhs);
    Vector_2d(Vector_2d&& rhs);
    ~Vector_2d();
    std::vector<double> get_abscissa();
    std::vector<double> get_ordinate();
    void set_abscissa(std::vector<double> _abscis);
    void set_ordinate(std::vector<double> _ordin);
    void save_to_file(const std::string& filename) const;
    void load_from_file(const std::string& filename);
};
