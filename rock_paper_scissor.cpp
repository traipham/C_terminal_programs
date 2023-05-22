/**
 * @file rock_paper_scissor.cpp
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
#include <ctime>
#include <string>
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
std::string chooseWinner(char player, char computer);
int main(){    
    char computer;
    char player; 
    int p_points = 0;
    int c_points = 0;
    char retry;
    std::string winner;
    do{
        player = getUserChoice();
        std::cout << "\nYour choice: \n";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "\nComputer's choice:\n";
        showChoice(computer);
        std::cout << "\n";
        winner = chooseWinner(player, computer);
        std::cout << "\n";

        if(winner == "player"){
            p_points += 1;
        } else if (winner == "computer") {
            c_points += 1;
        }

        std::cout << "Your points: " << p_points << ", computer's points: " << c_points << "\n";

        std::cout << "Would you like to continue?(Yes = 'y', No = 'n')\n";
        std::cin >> retry;
        std::cin.clear();
        fflush(stdin);
    } while(tolower(retry) == 'y');

    return 0;
}

char getUserChoice(){
    char player;
    do{
        std::cout << "Rock-Paper-Scissors Game!\n";
        std::cout << "***************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scisors\n";
        std::cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;
    char choice;
    switch(num){
        case 1:
            choice = 'r';
            break;
        case 2:
            choice = 'p';
            break;
        case 3:
            choice = 's';
            break;
    }
    return choice;
}
void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissor\n";
            break;
        default:
            std::cout << "Invalid choice!";
    }
}
std::string chooseWinner(char player, char computer){
    char low_player = tolower(player);
    char low_comp = tolower(computer);
    if (low_player != 'r' && low_player != 's' && low_player != 'p'){
        std::cout << "Invalid player's choice!\n";
        return "";
    }
    if (low_comp != 'r' && low_comp != 's' && low_comp != 'p')
    {
        std::cout << "Invalid computer's choice!\n";
        return "";
    }

    std::string winner;

    switch (player)
    {
    case 'r':
        if (computer == 'p')
        {
            std::cout << "Player lose!";
            winner = "computer";
            break;
        }
        else if (computer == 's')
        {
            std::cout << "Computer lose!";
            winner = "player";
            break;
        }
        else
        {
            std::cout << "Tie";
            winner = "";
            break;
        }
    case 'p':
        if (computer == 's')
        {
            std::cout << "Player lose!";
            winner = "computer";
            break;
        }
        else if (computer == 'r')
        {
            std::cout << "Computer lose!";
            winner = "player";
            break;
        }
        else
        {
            std::cout << "Tie";
            winner = "";
            break;
        }
    case 's':
        if (computer == 'r')
        {
            std::cout << "Player lose!";
            winner = "computer";
            break;
        }
        else if (computer == 'p')
        {
            std::cout << "Computer lose!";
            winner = "player";
            break;
        }
        else
        {
            std::cout << "Tie";
            winner = "";
            break;
        }
    }
    return winner;
}