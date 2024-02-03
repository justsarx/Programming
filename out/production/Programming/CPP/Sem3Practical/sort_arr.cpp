#include <iostream>

using namespace std;

void rearrange(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            // Swap positive element with the next available position
            swap(arr[i], arr[j++]);
        }
    }
}

int main() {
    int arr[] = {10, -15, 1, 3, -2, 0, -2, -3, 2, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    rearrange(arr, n);

    cout << "\nModified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
