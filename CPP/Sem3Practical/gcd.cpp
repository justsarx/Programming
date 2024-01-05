#include <iostream>

using namespace std;

// Function to find the greatest common divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
   if (b == 0) {
       return a;
   }
   return gcd(b, a % b);
}

// Function to find the least common multiple (LCM) using the formula LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b) {
   return (a * b) / gcd(a, b);
}

int main() {
   int num1, num2;

   cout << "Enter two numbers: ";
   cin >> num1 >> num2;

   int gcd_value = gcd(num1, num2);
   int lcm_value = lcm(num1, num2);

   cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd_value << endl;
   cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm_value << endl;

   return 0;
}
