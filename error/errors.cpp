
#include <iostream>
#include <vector>
#include <cmath>

class MeasurementError
{
private:
    std::vector<double> measurements;
    double meanValue;
    double avgDevMeasurements;

    double calculateMean()
    {
        double sum = 0.0;
        for (double value : measurements)
        {
            sum += value;
        }
        return sum / measurements.size();
    }

    double calculateAvgDev(const std::vector<double> &values, double mean)
    {
        double sum = 0.0;
        for (double value : values)
        {
            sum += (value - mean) * (value - mean);
        }
        return std::sqrt(sum / values.size());
    }

public:
    MeasurementError(const std::vector<double> &measurements) : measurements(measurements)
    {
        meanValue = calculateMean();
        avgDevMeasurements = calculateAvgDev(measurements, meanValue);
    }

    double getMeanValue() const
    {
        return meanValue;
    }

    double getAvgDevMeasurements() const
    {
        return avgDevMeasurements;
    }
};

int main()
{
    std::vector<double> measurements = {4.0, 4.1, 4.2, 3.9, 4.0};
    MeasurementError errorCalculator(measurements);

    std::cout << "Среднее значение: " << errorCalculator.getMeanValue() << std::endl;
    std::cout << "Средняя погрешность измерений: " << errorCalculator.getAvgDevMeasurements() << std::endl;

    return 0;
}
