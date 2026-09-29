#include <iostream>
using namespace std;

// Tail-recursive function with an accumulator (ans)
long fact(int n, long ans = 1) {
    if (n == 0 || n == 1) {
        return ans;
    }
    return fact(n - 1, n * ans); // Last action is purely the recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial: " << fact(n) << endl;
    return 0;
}
