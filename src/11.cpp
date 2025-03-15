#include <iostream>
using namespace std;

int main() {
  // Generate a random number between 1 and 100
  int num = rand() % 100 + 1;

  // Ask the user to guess the number
  cout << "Guess a number between 1 and 100: ";
  cin >> num;

  // Check if the user's guess is correct
  if (num == rand()) {
    cout << "Congratulations, you won! The answer was " << num << endl;
  } else {
    cout << "Sorry, you lost. The answer was " << num << endl;
  }

  return 0;
}
