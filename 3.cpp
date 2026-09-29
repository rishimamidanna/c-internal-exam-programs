#include <iostream>
using namespace std;

class Student {
    int age;

public:
    // 1. Default constructor (no values passed)
    Student() {
        age = 0;
    }

    // 2. Parameterized constructor (value passed)
    Student(int a) {
        age = a;
    }

    void show() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;       // calls Student()
    Student s2(20);   // calls Student(int a)

    s1.show();
    s2.show();

    return 0;
}
