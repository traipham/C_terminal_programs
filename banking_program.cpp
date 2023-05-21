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

void showBalance(double balance);
double deposit();
double withdraw(double balance);
void banking();

void banking(){
    double balance = 0;
    int choice;
    std::cout << "What is your starting balance?(Default is 0)\n";
    std::cin >> balance;
    std::cout << "Your starting balance is: $" << balance;
    std::cout << "\n\n";

    do {
        std::cout << "*******************\n";
        std::cout << "Enter Your choice:\n";
        std::cout << "*******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); // reset error when std::cin fail to interpret input
        fflush(stdin);  // clear input buffer, clear the newline that is placed after the space

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                std::cout << "Your new balance is $" << balance << "\n\n";
                break;
            case 3:
                balance -= withdraw(balance);
                std::cout << "Your new balance is $" << balance << "\n\n";
                break;
            case 4:
                std::cout << "Thanks for visiting!\n\n";
                break;
            default: 
                std::cout << "Invalid choice\n\n"; 
        }
    } while(choice != 4);
    return;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << balance << "\n\n";
}

double deposit(){
    double amount;
    std::cout << "How much money would you like to deposit: ";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }
    std::cout << "That's not a valid amount: \n";
    return 0;
}

double withdraw(double balance){
    double amount;
    do{
        std::cout << "How much money would you like to withdraw? ";
        std::cin >> amount;
        if (amount > balance){
            std::cout << "You can not withdraw this amount! Try again!";
        }
    } while (amount > balance);

    return amount;
}

int main(){
    banking();
    return 0;
}