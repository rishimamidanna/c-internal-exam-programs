#include <iostream>
using namespace std;

// 1. Inline Function
inline int square(int x) { return x * x; }

// 2. Overloaded Functions (same name, different arguments)
int add(int a, int b) { return a + b; }

int add(int a, int b, int c) { return a + b + c; }

int main() {
  cout << "Square: " << square(5) << endl;   // Calls inline function
  cout << "Add 2: " << add(2, 3) << endl;    // Calls 2-parameter add
  cout << "Add 3: " << add(1, 2, 3) << endl; // Calls 3-parameter add

  return 0;
}
