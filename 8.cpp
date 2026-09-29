#include <iostream>
using namespace std;

// One single function template for any data type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // 1. Using it with integers
    cout << "Integers: " << add(10, 20) << endl;

    // 2. Using the exact same function with floats
    cout << "Floats:   " << add(5.5f, 2.3f) << endl;

    // 3. Using the exact same function with doubles
    cout << "Doubles:  " << add(12.345, 6.789) << endl;

    return 0;
}
