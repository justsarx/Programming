#include <iostream>

using namespace std;

// Function to calculate the binomial coefficient
int binomialCoeff(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
  }
}

// Function to print Pascal's Triangle
void printPascalTriangle(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      // Print the binomial coefficient
      cout << binomialCoeff(i, j) << " ";
    }
    cout << endl;
  }
}

int main() {
  // Enter the number of rows
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  // Print Pascal's Triangle
  printPascalTriangle(n);

  return 0;
}
