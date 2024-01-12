#include <iostream>
using namespace std;

int main() {
 int in, i, mode_class, max_frequency;
 cout << "Enter the number of rows of data :: ";
 cin >> in;
 in++;
 double ci[in][2], f[in], cw;

 // Data Input:
 for (i = 1; i < in; i++) {
   cout << "\nEnter class interval (Lower limit) : ";
   cin >> ci[i][0];
   cout << "\nEnter class interval (Upper limit) : ";
   cin >> ci[i][1];
   cout << "\nEnter frequency : ";
   cin >> f[i];
 }

 // Find the class with the highest frequency
 mode_class = 1;
 max_frequency = f[1];
 for (i = 2; i < in; i++) {
   if (f[i] > max_frequency) {
     mode_class = i;
     max_frequency = f[i];
   }
 }

 // Calculate the modal class
 cw = ci[1][1] - ci[1][0];
 double mode = ci[mode_class][0] + ((cw / f[mode_class]) * max_frequency);

 cout << "Mode: " << mode << endl;
 return 0;
}
