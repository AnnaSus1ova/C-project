
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Функция для вычисления предсказаний
vector<double> predict(const vector<vector<double>>& X, const vector<double>& coefficients) {
    vector<double> predictions(X.size(), 0.0);
    for (size_t i = 0; i < X.size(); i++) {
        for (size_t j = 0; j < X[0].size(); j++) {
            predictions[i] += X[i][j] * coefficients[j];
        }
    }
    return predictions;
}

// Функция для вычисления суммы квадратов ошибок 
double computeCost(const vector<vector<double>>& X, const vector<double>& y, const vector<double>& coefficients, double lambda) {
    double cost = 0.0;
    vector<double> predictions = predict(X, coefficients);
    for (size_t i = 0; i < y.size(); i++) {
        cost += pow(predictions[i] - y[i], 2);
    }
    // Добавляем штраф за регуляризацию
    for (size_t j = 0; j < coefficients.size(); j++) {
        cost += lambda * pow(coefficients[j], 2);
    }
    return cost / (2 * y.size());
}

// Функция для выполнения градиентного спуска
vector<double> ridgeRegression(const vector<vector<double>>& X, const vector<double>& y, double lambda, double alpha, int iterations) {
    size_t m = X.size();
    size_t n = X[0].size();
    vector<double> coefficients(n, 0.0);

    for (int iter = 0; iter < iterations; iter++) {
        vector<double> gradients(n, 0.0);
        vector<double> predictions = predict(X, coefficients);

        for (size_t i = 0; i < m; i++) {
            for (size_t j = 0; j < n; j++) {
                gradients[j] += (predictions[i] - y[i]) * X[i][j];
            }
        }

        for (size_t j = 0; j < n; j++) {
            coefficients[j] -= alpha * (gradients[j] / m + lambda * coefficients[j]);
        }

        // Можно выводить стоимость для наблюдения за сходимостью
        if (iter % 100 == 0) {
            double cost = computeCost(X, y, coefficients, lambda);
            cout << "Итерация " << iter << ", стоимость: " << cost << endl;
        }
    }

    return coefficients;
}

// Основная функция
int main() {
    vector<vector<double>> X = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5}
    }; // Ваши данные X

    vector<double> y = {1, 2, 3, 4}; // Ваши данные Y
    
    double lambda = 1.0; // Параметр регуляризации
    double alpha = 0.01; // Скорость обучения
    int iterations = 1000; // Количество итераций

    vector<double> coefficients = ridgeRegression(X, y, lambda, alpha, iterations);

    cout << "Коэффициенты: ";
    for (double coeff : coefficients) {
        cout << coeff << " ";
    }
    cout << endl;

    return 0;
}

