#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i * i;
    }
    cout << "The sum of the first " << n << " perfect squares is: " << sum << endl;
    return 0;
}
