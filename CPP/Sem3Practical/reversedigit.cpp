#include <iostream>
using namespace std;

int reverse_digits(int num) {
  int reversed_num = 0;
  while (num != 0) {
    int digit = num % 10;
    reversed_num = reversed_num * 10 + digit;
    num /= 10;
  }
  return reversed_num;
}

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  int reversed_number = reverse_digits(number);
  cout << "Original number: " << number << endl;
  cout << "Reversed number: " << reversed_number << endl;

  return 0;
}
