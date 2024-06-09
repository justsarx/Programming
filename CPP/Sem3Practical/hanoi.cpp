#include <iostream>

using namespace std;

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
   if (n == 1) {
       cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
       return;
   }

   // Recursive calls to move top n-1 disks to auxiliary rod
   hanoi(n - 1, from_rod, aux_rod, to_rod);

   // Move the largest disk to the destination rod
   cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;

   // Recursive calls to move n-1 disks from auxiliary rod to destination rod
   hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
   int num_disks;

   cout << "Enter the number of disks: ";
   cin >> num_disks;

   cout << "The moves are:\n";
   hanoi(num_disks, 'A', 'C', 'B');  // A, B, and C are the names of the rods

   return 0;
}
