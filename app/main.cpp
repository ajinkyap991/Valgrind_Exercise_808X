/** Copyright 2020 Ajinkya Parwekar
 * @file main.cpp
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
 * This is main.cpp file for AnalogSensor Class
 * And this file implements the program.
 */


#include <iostream>
#include <AnalogSensor.hpp>

/**
 * @brief It is the main function to demonstrate working of implemented
 * Analog Sensor.
 * @param none
 * @returns none
 */

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
