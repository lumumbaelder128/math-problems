#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n > 0) {
        cout << "The number " << n << " is a positive integer." << endl;
    } else {
        cout << "The number " << n << " is not a positive integer." << endl;
    }
    
    return 0;
}
