#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));
  int number1 = rand() % 10 + 1;
  int number2 = rand() % 10 + 1;
  int sum = number1 + number2;
  cout << "What is " << number1 << " + " << number2 << "?" << endl;
  cin >> sum;
  if (sum == number1 + number2) {
    cout << "Correct!" << endl;
  } else {
    cout << "Incorrect." << endl;
  }
  return 0;
}
