/** Copyright 2020 Ajinkya PArwekar
 * @file AnalogSensor.hpp
 * @editor
 *
 * Ajinkya PArwekar (117030389)
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
 *  This is hpp file for AnalogSensor.
 *  This file contains the defintions of the Analong Sensor 
 *  Class attributes and methods
 */


#pragma once

#include <iostream>

/**
 * @brief The declaration of AnalogSensor Class
 */

class AnalogSensor {
 public:
    /**
     * @brief The constructor of the class AnalogSensor 
     * @param samples unsigned int which stores number of samples to be read.
     * @return None
     */

    explicit AnalogSensor(unsigned int samples);

    /**
     * @brief The Destructor of the class AnalogSensor 
     * @param None
     * @return None
     */

    ~AnalogSensor();

    /**
     * @brief Definition of Read method of the AnalogSensor class.
     * @param None
     * @return int value
     */

    int Read();

 private:
    unsigned int mSamples;
};
