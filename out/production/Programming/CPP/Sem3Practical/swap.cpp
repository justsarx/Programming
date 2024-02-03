#include <iostream>

using namespace std;

// Function to swap the values of two integers using a temporary variable
void swap(int &x, int &y) {
   int temp = x;  // Store the value of x in a temporary variable
   x = y;         // Assign the value of y to x
   y = temp;      // Assign the original value of x (stored in temp) to y
}

int main() {
   int a = 10, b = 20;

   cout << "Before swapping: a = " << a << ", b = " << b << endl;

   swap(a, b);  // Call the swap function to exchange values

   cout << "After swapping: a = " << a << ", b = " << b << endl;

   return 0;
}
