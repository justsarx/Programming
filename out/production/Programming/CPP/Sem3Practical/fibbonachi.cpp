#include <iostream>

using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: 0th and 1st Fibonacci numbers are 0 and 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call for other terms
    }
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}
