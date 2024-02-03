#include <iostream>

using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;  // Already unique if empty or has only one element
    }

    int j = 0;  // Index for unique elements

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];  // Keep unique elements
        }
    }

    arr[j++] = arr[n - 1];  // Copy the last element, as it's always unique

    return j;  // Return the new size of the array
}

int main() {
    int arr[] = {10, 10, 10, 30, 40, 40, 50, 80, 80, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
