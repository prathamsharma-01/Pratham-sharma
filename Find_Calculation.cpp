// Find_Calculation.cpp

#include "Find_Calculation.h"

namespace MathCalculations {
    double calculateSquareRoot(double value) {
        return std::sqrt(value);
    }

    double calculateCube(double value) {
        return value * value * value;
    }

    double calculatePower(double base, double exponent) {
        return std::pow(base, exponent);
    }
}
// Main.cpp

#include <iostream>
#include "Find_Calculation.h"

int main() {
    // Example usage of the functions from the Find_Calculation library
    double inputValue;

    // Get input value from the user
    std::cout << "Enter a double value: ";
    std::cin >> inputValue;

    // Calculate and display the square root
    double squareRootResult = MathCalculations::calculateSquareRoot(inputValue);
    std::cout << "Square root: " << squareRootResult << std::endl;

    // Calculate and display the cube
    double cubeResult = MathCalculations::calculateCube(inputValue);
    std::cout << "Cube: " << cubeResult << std::endl;

    // Calculate and display the power (e.g., squared)
    double powerResult = MathCalculations::calculatePower(inputValue, 2);
    std::cout << "Power (squared): " << powerResult << std::endl;

    return 0;
}

