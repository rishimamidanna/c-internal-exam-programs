#include <iostream>
using namespace std;

// Class Template declaration
template <class T> class Calculator {
  T a, b;

public:
  Calculator(T x, T y) {
    a = x;
    b = y;
  }

  void add() { cout << "Sum = " << a + b << endl; }
};

int main() {
  // 1. Template instantiated with int
  Calculator<int> intCalc(10, 20);
  cout << "Integer Addition: ";
  intCalc.add();

  // 2. Template instantiated with float
  Calculator<float> floatCalc(5.5f, 4.3f);
  cout << "Float Addition: ";
  floatCalc.add();

  // 3. Template instantiated with double
  Calculator<double> doubleCalc(12.345, 67.891);
  cout << "Double Addition: ";
  doubleCalc.add();

  return 0;
}
