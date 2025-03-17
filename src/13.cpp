// Random Math Problem
int main() {
  int num1 = rand() % 10 + 1;
  int num2 = rand() % 10 + 1;
  int sum = num1 + num2;
  cout << "What is " << num1 << " + " << num2 << "?";
  int answer;
  cin >> answer;
  if (answer == sum) {
    cout << "Correct!";
  } else {
    cout << "Incorrect, the correct answer is " << sum << ".";
  }
  return 0;
}
