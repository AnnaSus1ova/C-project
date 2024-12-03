#ifndef ERRORS_H
#define ERRORS_H
#include <iostream>
#include <vector>

class MeasurementError
{
private:
    std::vector<double> measurements;
    double meanValue;
    double avgDevMeasurements;
    double calculateMean();

    double calculateAvgDev(const std::vector<double> &values, double mean);

public:
    MeasurementError(const std::vector<double> &measurements) : measurements(measurements)
    {
        meanValue = calculateMean();
        avgDevMeasurements = calculateAvgDev(measurements, meanValue);
    }

    double getMeanValue() const;


    double getAvgDevMeasurements() const;

    float average_value();

    float average_measurement_error();
};


#endif // ERRORS_H
