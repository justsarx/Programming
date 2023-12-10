#include <iostream>
using namespace std;

int main() {
  int a[20], i, j, k, n;

  cout << "Enter array size : ";
  cin >> n;

  cout << "\nEnter array " << n << " element : \n";
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << "\nOriginal array Elements are : ";

  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  cout << "\nNew array Element are  : ";

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n;) {
      if (a[j] == a[i]) {
        for (k = j; k < n; k++) {
          a[k] = a[k + 1];
        }
        n--;
      } 
      else {
        j++;
      }
    }
  }

  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}