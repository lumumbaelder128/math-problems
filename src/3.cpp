#include <iostream>
using namespace std;

int main() {
    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;

    // Ask the user to guess the number
    cout << "Guess a number between 1 and 100: ";
    int guess;
    cin >> guess;

    // Check if the guess is correct
    if (guess == random_number) {
        cout << "Correct! You win!";
    } else {
        cout << "Incorrect. The number was " << random_number << endl;
    }

    return 0;
}
