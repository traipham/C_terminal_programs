#include <iostream>

int main(){
    std::string questions[] = {
        "1. What year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. is the Earth flat?"
    };

    std::string option[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bharne Strousrtup", "C. John Cena", "D. Hello World"},
        {"A. C", "B. C+", "C. C-", "D. B++"},
        {"A. yes", "B. no", "C. Sometimes", "D. Jupiter"}
    };

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(answerKey)/sizeof(char);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "**********************************\n";
        std::cout << "*********** QUIZ GAME **************\n";
        std::cout << "**********************************\n";

        std::cout << questions[i] << "\n\n";

        for(int j =0; j < sizeof(option[i])/sizeof(option[i][0]); j++){
            std::cout << option[i][j] << " ";
        }

        std::cout << "\nWhat is your answer?: \n";
        std::cin >> guess;

        if(guess == answerKey[i]){
            std::cout << "CORRECT!\n";
            score++;
        } else {
            std::cout << "WRONG!\n";
            std::cout << "The answer is " << answerKey[i] << '\n';
        }
    }

    std::cout << "**********************************\n";
    std::cout << "************ RESULTS *************\n";
    std::cout << "**********************************\n";
    std::cout << "CORRECT ANSWERS: " << score << '\n';
    std::cout << "Number of questions " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size) * 100 << "%";
}