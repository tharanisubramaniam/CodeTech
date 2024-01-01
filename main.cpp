/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    //random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess;

    std::cout << "Welcome to the Number Guessing Game!\n";
    
    do {
        // Ask the user to guess the number
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Provide feedback
        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
        }
    } while (userGuess != secretNumber);

    return 0;
}

