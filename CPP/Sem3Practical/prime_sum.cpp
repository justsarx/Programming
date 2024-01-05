#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
   if (num <= 1) {
       return false;
   }

   for (int i = 2; i <= sqrt(num); ++i) {
       if (num % i == 0) {
           return false;
       }
   }

   return true;
}

int main() {
   int primeSum = 0;

   for (int num = 100; num <= 500; ++num) {
       if (isPrime(num)) {
           primeSum += num;
       }
   }

   cout << "Sum of all prime numbers between 100 and 500: " << primeSum << endl;

   return 0;
}
