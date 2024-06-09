#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  int age, roll;
  string name;

public:
  void saveinf(int a, int r, string n) {
    fstream file;
    file.open("Students.txt", ios::out | ios::app);
    file << "Roll : " << r << "\tAge : " << a << "\tName : " << n << '\n';
    file.close();
  }
  void getinf(int a, int r, string n) {
    age = a;
    roll = r;
    name = n;
    saveinf(age, roll, name);
  }
  void clrinf() { remove("Students.txt"); }
  void displayinf() {
    fstream file;
    file.open("Students.txt", ios::in);
    if (file.is_open()) {
      string line;
      while (getline(file, line)) {
        cout << line << endl;
      }
    } else {
      cout << "Error: Unable to open file." << endl;
    }
    file.close();
    cin.get();
    cin.get();
  }
};

int main() {
  int a, r, in;
  string n;
  Student lnmi;
  while (true) {
    system("tput clear");
    cout << "\n\nPlease select an option from below :-" << endl;
    cout << "\t1. Add an entry to the list of students." << endl;
    cout << "\t2. Display the list of students." << endl;
    cout << "\t3. Delete the list of students." << endl;
    cout << "\t4. Exit saving file." << endl;
    cout << "\t5. Exit discarding file." << endl;
    cin >> in;

    switch (in) {

    case 1:
      cout << "\nEnter the Roll of the student :: ";
      cin >> r;
      cout << "\nEnter the name of the student :: ";
      cin >> n;
      cout << "\nEnter the age of the student :: ";
      cin >> a;
      lnmi.getinf(a, r, n);
      break;

    case 2:
      lnmi.displayinf();
      break;

    case 3:
      lnmi.clrinf();
      break;

    case 4:
      exit(0);

    case 5:
      lnmi.clrinf();
      exit(0);

    default:
      cout << "\nError! Unknown command." << endl;
      break;
    }
  }

  return 0;
}