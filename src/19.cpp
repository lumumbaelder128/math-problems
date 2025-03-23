#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Example solution using a simple loop
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " is even." << endl;
        } else {
            cout << i << " is odd." << endl;
        }
    }

    return 0;
}
