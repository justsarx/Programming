/*
Here's a breakdown of the code:

1. **Include libraries:** `iostream` for input and output, and `string` for handling strings.
2. **Define functions:**
    * `convertLessThanTwenty`: Converts a number less than 20 to its corresponding word (e.g., 1 -> One, 15 -> Fifteen).
    * `convertLessThanHundred`: Converts a number less than 100 to its corresponding words (e.g., 32 -> Thirty Two, 80 -> Eighty).
    * `convertLessThanThousand`: Converts a number less than 1000 to its corresponding words (e.g., 543 -> Five Hundred Forty Three, 121 -> One Hundred Twenty One).
    * `convertNumberToWords`: Converts a large number (potentially up to billions) to its corresponding words (e.g., 123456789 -> One Hundred Twenty Three Million Four Hundred Fifty Six Thousand Seven Hundred Eighty Nine).
3. **Define words arrays:**
    * `words`: Array containing words for numbers less than 20.
    * `tens`: Array containing words for tens (e.g., Twenty, Thirty).
    * `units`: Array containing words for units (e.g., One, Two).
    * `hundreds`: Array containing words for hundreds (e.g., One Hundred, Two Hundred).
4. **Main function:**
    * Gets input from the user for the number.
    * Calls the `convertNumberToWords` function to convert the number to words.
    * Prints the converted words.

This code effectively converts a number to its corresponding words, handling numbers up to billions. 

Here are some potential improvements:

* **Error handling:** Currently, the code doesn't handle invalid inputs. You could add checks to ensure users enter valid numbers.
* **Extend to larger numbers:** While the code handles numbers up to billions, you could extend it to handle trillions and beyond.
* **Modularization:** Some parts of the code could be further modularized for better organization and maintainability.

Overall, the code provides a basic but useful implementation for converting numbers to words in C++.
*/


#include <iostream>
#include <string>

using namespace std;

// Function to convert a number less than 20 to words
string convertLessThanTwenty(int n) {
    string words[] = {
        "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"};
    return words[n];
}

// Function to convert a number less than 100 to words
string convertLessThanHundred(int n) {
    if (n < 20) {
        return convertLessThanTwenty(n);
    }
    string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    return tens[n / 10] + " " + units[n % 10];
}

// Function to convert a number less than 1000 to words
string convertLessThanThousand(int n) {
    if (n < 100) {
        return convertLessThanHundred(n);
    }
    string hundreds[] = {"", "One Hundred", "Two Hundred", "Three Hundred", "Four Hundred", "Five Hundred", "Six Hundred", "Seven Hundred", "Eight Hundred", "Nine Hundred"};
    return hundreds[n / 100] + " " + convertLessThanHundred(n % 100);
}

// Function to convert a number to words
string convertNumberToWords(long long n) {
    string words[4] = {"", "Thousand", "Million", "Billion"};
    string output = "";
    int i = 0;

    // Validate input
    if (n < 0) {
        return "Negative numbers not supported";
    }

    while (n > 0) {
        int remainder = n % 1000;

        if (remainder != 0) {
            output = convertLessThanThousand(remainder) + " " + words[i] + " " + output;
        }

        n /= 1000;
        i++;
    }

    return output;
}

int main() {
    long long number;

    cout << "Enter a non-negative number: ";
    cin >> number;

    // Check for invalid input
    if (!cin) {
        cout << "Invalid input" << endl;
        return 1;
    }

    string amountInWords = convertNumberToWords(number);
    cout << "Amount in words: " << amountInWords << endl;

    return 0;
}

