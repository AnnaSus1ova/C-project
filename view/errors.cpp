#include <iostream>
#include <vector>
#include <cmath>
#include "errors.h"
#include "Vector.h"
#include "Data.h"


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


    float MeasurementError::average_value_abscissa()
    {
        MeasurementError errorCalculator(Data.get_abscissa());

        float average_value = errorCalculator.getMeanValue();

        return average_value;

    }

    float MeasurementError::average_measurement_error_abscissa()
    {
        MeasurementError errorCalculator(Data.get_abscissa());

        float average_measurement_error = errorCalculator.getAvgDevMeasurements();

        return average_measurement_error;
    }

    float MeasurementError::average_value_ordinate()
    {
        Vector_2d measurements;
        MeasurementError errorCalculator(Data.get_ordinate());

        float average_value = errorCalculator.getMeanValue();

        return average_value;

    }

    float MeasurementError::average_measurement_error_ordinate()
    {
        MeasurementError errorCalculator(Data.get_ordinate());

        float average_measurement_error = errorCalculator.getAvgDevMeasurements();

        return average_measurement_error;
    }
