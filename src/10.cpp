#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Generate a random number between 1 and 10
    int num = rand() % 10 + 1;
    cout << "Guess the number: ";
    cin >> num;
    if (num == 5) {
        cout << "You are correct!" << endl;
    } else {
        cout << "Sorry, that's incorrect. The answer is 5." << endl;
    }
    return 0;
}
