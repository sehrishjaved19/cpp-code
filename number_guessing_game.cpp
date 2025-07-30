#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    bool guessedCorrectly = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Try to guess it." << endl;

    while (!guessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (cin.fail()) { // Handle non-numeric input
            cin.clear();
   
            cout << "Invalid input. Please enter a number." << endl;
            continue; // Skip the rest of the loop and ask for input again
        }

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            guessedCorrectly = true;
        }
    }

    return 0;
} 