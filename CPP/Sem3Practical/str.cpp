#include <iostream>

using namespace std;

int main() {
    const int MAX_LENGTH = 100;  // Set a maximum length for the input string
    char str[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH);  // Read the entire line, including spaces

    cout << "You entered: " << str << endl;

    return 0;
}
