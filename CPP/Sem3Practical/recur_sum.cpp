#include <iostream>

using namespace std;

// Recursive function to add first 'n' natural numbers
int sum_natural_numbers(int n) {
   if (n == 0) {
       return 0;  // Base case: Sum of first 0 natural numbers is 0
   } else {
       return n + sum_natural_numbers(n - 1);  // Recursively add n to the sum of first n-1 numbers
   }
}

int main() {
   int n;

   cout << "Enter a positive integer: ";
   cin >> n;

   int sum = sum_natural_numbers(n);

   cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

   return 0;
}
