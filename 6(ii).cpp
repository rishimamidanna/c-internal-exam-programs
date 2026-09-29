#include <iostream>
using namespace std;

// First Parent class
class A {
public:
  void showA() { cout << "Parent Class A" << endl; }
};

// Second Parent class
class B {
public:
  void showB() { cout << "Parent Class B" << endl; }
};

// Child class inheriting from both A and B
class C : public A, public B {
public:
  void showC() { cout << "Child Class C" << endl; }
};

int main() {
  C obj;       // Create object of child class
  obj.showA(); // Call first parent function
  obj.showB(); // Call second parent function
  obj.showC(); // Call child function

  return 0;
}