// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-02
// This program converts degrees celsius to degrees fahrenheit

#include <iostream>
#include <string>

float conversion() {
    // this function converts celsius to fahrenheit
    std::string celsiusString;
    float celsius;
    float fahrenheit;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusString;

    // process & output
    try {
        celsius = std::stof(celsiusString);

        fahrenheit = ((9 * celsius) / 5) + 32;

        std::cout << "\n" << celsiusString << "°C is equal to " <<
        fahrenheit << "°F. " << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nYour temperature is invalid. Please Re-Run."
        << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}

int main() {
    // this function calls the conversion function

    // call conversion
    conversion();
}
