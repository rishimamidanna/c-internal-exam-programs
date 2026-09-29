#include <iostream>
using namespace std;

class Number {
  int x;

public:
  Number(int n) { x = n; }

  // 1. Unary operator (takes 1 object)
  friend void operator++(Number &obj) { obj.x++; }

  // 2. Binary operator (takes 2 objects)
  friend void operator+(Number a, Number b) {
    cout << "Sum = " << a.x + b.x << endl;
  }

  void print() { cout << "Value = " << x << endl; }
};

int main() {
  Number n1(5), n2(10);

  ++n1;       // Calls unary operator++
  n1.print(); // Output: Value = 6

  n1 + n2; // Calls binary operator+ (Output: Sum = 16)

  return 0;
}
