#include <iostream>

using namespace std;

// Function to add two matrices
void addMatrices(int A[][10], int B[][10], int C[][10], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int A[][10], int B[][10], int C[][10], int m, int n, int p) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int A[][10], int B[][10], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            B[j][i] = A[i][j];
        }
    }
}

int main() {
    int m, n, p;

    cout << "Enter the dimensions of the first matrix (m x n): ";
    cin >> m >> n;

    int A[10][10];
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the dimensions of the second matrix (n x p): ";
    cin >> n >> p;  // Note: n is reused for consistency in multiplication

    int B[10][10];
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> B[i][j];
        }
    }

    int C[10][10];

    // Addition
    addMatrices(A, B, C, m, n);
    cout << "\nSum of matrices:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Multiplication
    multiplyMatrices(A, B, C, m, n, p);
    cout << "\nProduct of matrices:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose
    transposeMatrix(A, C, m, n);
    cout << "\nTranspose of the first matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
