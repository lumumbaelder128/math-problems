#include <iostream>
#include <cmath>

int main() {
  int x = 4; // A variable to store the input value
  std::cout << "Enter a number: ";
  std::cin >> x;
  double y = sqrt(x); // The square root of the input value
  std::cout << "The square root of " << x << " is " << y << std::endl;
  return 0;
}
