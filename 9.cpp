#include <iostream>
using namespace std;

int main() {
  double numerator, denominator, result;

  cout << "Enter numerator: ";
  cin >> numerator;

  cout << "Enter denominator: ";
  cin >> denominator;

  try {
    // Condition checking for a runtime error
    if (denominator == 0) {
      throw "Error: Division by zero is not allowed!";
    }

    // This line is skipped if an exception is thrown
    result = numerator / denominator;
    cout << "Result: " << result << endl;
  } catch (const char *msg) {
    // Catches the string thrown by the throw keyword
    cout << msg << endl;
  }

  cout << "Program execution completed safely." << endl;

  return 0;
}
