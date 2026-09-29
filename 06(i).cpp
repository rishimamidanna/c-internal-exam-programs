#include <iostream>
using namespace std;

// Base / Parent class
class A {
public:
  void showA() { cout << "Parent Class A" << endl; }
};

// Derived / Child class inheriting from A
class B : public A {
public:
  void showB() { cout << "Child Class B" << endl; }
};

int main() {
  B obj;       // Create object of child class
  obj.showA(); // Call parent function
  obj.showB(); // Call child function

  return 0;
}