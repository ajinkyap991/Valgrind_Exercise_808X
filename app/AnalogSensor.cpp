/** Copyright 2020 Ajinkya Parwekar
 * @file AnalogSensor.cpp
 * @editor
 *
 * Ajinkya Parwekar (117030389)
 *
 *
 * @date 10/05/2020
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * @section DESCRIPTION
 *
 *  This is the cpp file for AnalogSensor class.
 *  This file implements the Analong Sensor 
 *  Class attributes and Methods.
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

/** 
 * @brief Class Constructor for the class AnalogSensor
 * @param samples is an unsigned int
 * @return None
*/

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

/** 
 *  @brief Destructor for for the class AnalogSensor
 * @param None
 * @return None
*/

AnalogSensor::~AnalogSensor() {
}

/** 
 * @brief The implementation for Read method of the class AnalogSensor
 * @param None
 * @return result in the form of int value.
*/

int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(),
    readings->end(), 0.0)/readings->size();
    delete readings;
    return result;
}


