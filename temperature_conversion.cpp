/**
 * @file guessing_num_game.cpp
 * @author Trai Pham (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-21
 *
 * @copyright Copyright (c) 2023
 *
 * Inspiration from BroCode
 */
#include <iostream>

int temp_conversion()
{
    double temp;
    char unit;

    std::cout << "***** Temperature Conversion ******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else
    {
        std::cout << "Please enter in only C or F\n";
    }
    return 0;
}

int main(){
    temp_conversion();

    return 0;
}