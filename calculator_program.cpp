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
#include <cmath>

int calculator()
{
    double num1;
    double num2;
    double ans;
    char op;

    std::cout << "****************** CALCULATOR ****************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        std::cout << "That was an invalid response!";
    }

    std::cout << "The result is " << ans;

    return ans;
}

int main(){
    calculator();

    return 0;
}