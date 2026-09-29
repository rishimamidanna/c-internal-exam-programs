#include <iostream>
using namespace std;

// 1. Global variable
int x = 100;

// 2. Custom Namespace
namespace MyNamespace {
    int value = 50;
    void show() {
        cout << "Inside MyNamespace, value = " << value << endl;
    }
}

int main() {
    // 3. Local variable with the same name as global variable
    int x = 10;

    cout << "Local x = " << x << endl;

    // Access global variable using '::'
    cout << "Global x = " << ::x << endl;

    // Access namespace members using 'NamespaceName::'
    cout << "Namespace value = " << MyNamespace::value << endl;
    MyNamespace::show();

    return 0;
}
