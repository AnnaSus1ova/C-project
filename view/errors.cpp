#include <iostream>
#include <vector>
#include <cmath>
#include "errors.h"


    double MeasurementError::calculateMean()
    {
        double sum = 0.0;
        for (double value : measurements)
        {
            sum += value;
        }
        return sum / measurements.size();
    }

    double MeasurementError::calculateAvgDev(const std::vector<double> &values, double mean)
    {
        double sum = 0.0;
        for (double value : values)
        {
            sum += (value - mean) * (value - mean);
        }
        return std::sqrt(sum / values.size());
    }

    double MeasurementError::getMeanValue() const
    {
        return meanValue;
    }

    double MeasurementError::getAvgDevMeasurements() const
    {
        return avgDevMeasurements;
    }


    float MeasurementError::average_value()
    {
        std::vector<double> measurements = {4.0, 4.1, 4.2, 3.9, 4.0};
        MeasurementError errorCalculator(measurements);


        float average_value = errorCalculator.getMeanValue();

        return average_value;

    }

    float MeasurementError::average_measurement_error()
    {
        std::vector<double> measurements = {4.0, 4.1, 4.2, 3.9, 4.0};
        MeasurementError errorCalculator(measurements);

        float average_measurement_error = errorCalculator.getAvgDevMeasurements();

        return average_measurement_error;
    }
