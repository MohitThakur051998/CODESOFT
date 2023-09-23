#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a random number between 1 and 100. Try to guess it.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++;

        if (userGuess < randomNumber)
        {
            cout << "Too low! Try again.\n";
        }
        else if (userGuess > randomNumber)
        {
            cout << "Too high! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << attempts << " attempts.\n";
        }
    } while (userGuess != randomNumber);

    return 0;
}

