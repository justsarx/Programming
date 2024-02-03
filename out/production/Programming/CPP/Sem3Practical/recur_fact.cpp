#include <iostream>

using namespace std;

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case: Factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursively multiply n with the factorial of (n-1)
    }
}

int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int fact = factorial(num);
        cout << "The factorial of " << num << " is: " << fact << endl;
    }

    return 0;
}
