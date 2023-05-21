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
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <ctime>

bool retry();

/**
 * @brief Number guessing game
 *
 * @return int
 */

void guess_game()
{
    int num;
    int guess = 0;
    int tries;
    int max_limit;
    int diff;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    std::cout << "******** NUMBER GUESSING GMAE ********\n";
    std::cout << "Select a Difficulty(1-3): Easy(1), Normal(2), Difficult(3)\n"; 
    std::cin >> diff;
    switch(diff){
        case 1:
            std::cout << "You chose Easy!\n";
            max_limit = 50;
            break;
        case 2:
            std::cout << "You chose Normal!\n";
            max_limit = 100;
            break;
        case 3:
            std::cout << "You chose Hard!\n";
            max_limit = 200;
            break;
        default:
            std::cout << "You chose an invalid value! Choose default difficulty (Easy).";
            max_limit = 50;
    }
    do
    {
        std::cout << "Enter a guess between (1-" << max_limit << "): \n";
        std::cin >> guess;
        std::cout << "\n";

        std::cin.clear();
        fflush(stdin);

        if (guess <= 0 || guess > max_limit)
        {
            std::cout << "This is an invalid value!";
            std::cout << "You have " << 5 - tries << " out of 5 tries left!\n";
            continue;
        } else if (guess == num){
            std::cout << "You won!!!!";
            return;
        }else if (guess > num)
        {
            std::cout << "Too high!\n";
        }
        else if (guess < num)
        {
            std::cout << "Too low!\n";
        }

        tries++;
        std::cout << "You have " << 5 - tries << " out of 5 tries left!\n";
        if((5-tries) <= 0 && retry()){
            tries = 0;
        }
    } while (tries < 5);
}

bool retry(){
    char cont;
    std::cout << "Would you like to continue? (Y/N)\n";
    std::cin >> cont;

    if (cont == 'Y' || cont == 'y')
    {
        return true;
    }
    return false;
}

int main(){
    guess_game();
    return 0;
}