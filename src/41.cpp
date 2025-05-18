#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Input an integer: ";
    if (cin.fail()) {
        // Handle input failure
        cout << "Error: Invalid input. Please try again." << endl;
        return 1;
    }
    cout << "Input a positive integer: ";
    if (cin.fail()) {
        // Handle input failure
        cout << "Error: Invalid input. Please try again." << endl;
        return 1;
    }
    cin.clear(); // Clear the input buffer
    int num = 0;
    while(cin >> num) {
        if (num < 0 || num > n) {
            // Handle negative or out-of-range numbers
            cout << "Input a positive integer: ";
            continue;
        } else {
            cout << "Positive integer, valid range: " << n << endl;
        }
    }
    return 0;
}
