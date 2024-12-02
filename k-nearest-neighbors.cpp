
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class KNearestNeighbors {
public:
    KNearestNeighbors(int k) : k(k) {}

    void fit(const std::vector<double>& x, const std::vector<double>& y) {
        this->x_train = x;
        this->y_train = y;
    }

    double predict(double x) {
        std::vector<std::pair<double, double>> distances;

        for (size_t i = 0; i < x_train.size(); i++) {
            double distance = std::abs(x - x_train[i]);
            distances.push_back(std::make_pair(distance, y_train[i]));
        }

        std::sort(distances.begin(), distances.end());

        double sum = 0;
        for (int i = 0; i < k && i < distances.size(); i++) {
            sum += distances[i].second;
        }

        return sum / std::min(k, static_cast<int>(distances.size()));
    }

private:
    int k;
    std::vector<double> x_train;
    std::vector<double> y_train;
};

int main() {
    int k = 3;  // Количество соседей
    KNearestNeighbors model(k);
    
    std::vector<double> x_train = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<double> y_train = {1.0, 2.0, 3.0, 4.0, 5.0};

    model.fit(x_train, y_train);
    
    double new_x = 3.5;
    double prediction = model.predict(new_x);
    
    std::cout << "Предсказание для x = " << new_x << ": " << prediction << std::endl;

    return 0;
}

