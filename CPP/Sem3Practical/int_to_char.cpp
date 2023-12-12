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
    cout << "Enter an amount in figures: ";
    cin >> number;

    string amountInWords = convertNumberToWords(number);
    cout << "Amount in words: " << amountInWords << endl;

    return 0;
}
