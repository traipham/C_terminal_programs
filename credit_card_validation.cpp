#include <iostream>
/**
 * @brief Luhn Algorithm
 * 
 */

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string carDNumber);
int main(){
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter your card number(use 6011000990139424): \n";
    std::cin >> cardNumber;
    int sum_1 = sumEvenDigits(cardNumber);
    int sum_2 = sumOddDigits(cardNumber);

    std::cout << "Sum 1: " << sum_1 << ", Sum 2: " << sum_2 << "\n";

    result = sum_1 + sum_2;

    if(result % 10 == 0){
        std::cout << cardNumber << " Is valid!";
    } else {
        std::cout << cardNumber << " Is not valid!";
    }

    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i]-'0';
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i]-'0')*2);
    }

    return sum;
}