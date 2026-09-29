#include <iostream>
using namespace std;

// 1. Abstract Class
class Shape {
public:
  virtual void area() = 0; // Pure virtual function
};

// 2. Rectangle Class
class Rectangle : public Shape {
public:
  void area() {
    int length = 4, width = 5;
    cout << "Area of Rectangle: " << length * width << endl;
  }
};

// 3. Circle Class
class Circle : public Shape {
public:
  void area() {
    float radius = 3;
    cout << "Area of Circle: " << 3.14 * radius * radius << endl;
  }
};

int main() {
  Shape *s; // Base class pointer

  Rectangle r;
  s = &r;
  s->area(); // Calls Rectangle's area

  Circle c;
  s = &c;
  s->area(); // Calls Circle's area

  return 0;
}