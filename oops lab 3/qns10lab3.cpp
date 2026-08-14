#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows (m): ";
    cin >> m;

    cout << "Enter number of columns (n): ";
    cin >> n;

    // Dynamically allocate row pointers for Matrix A
    int** A = new int*[m];

    // Allocate each row of Matrix A
    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
    }

    // Dynamically allocate row pointers for Matrix B
    int** B = new int*[m];

    // Allocate each row of Matrix B
    for (int i = 0; i < m; i++) {
        B[i] = new int[n];
    }

    // Dynamically allocate row pointers for Result matrix
    int** C = new int*[m];

    // Allocate each row of Result matrix
    for (int i = 0; i < m; i++) {
        C[i] = new int[n];
    }

    // Input Matrix A
    cout << "\nEnter elements of Matrix A:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "\nEnter elements of Matrix B:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nResultant Matrix (A + B):\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Delete each row of Matrix A
    for (int i = 0; i < m; i++) {
        delete[] A[i];
    }

    // Delete row pointers of Matrix A
    delete[] A;

    // Delete each row of Matrix B
    for (int i = 0; i < m; i++) {
        delete[] B[i];
    }

    // Delete row pointers of Matrix B
    delete[] B;

    // Delete each row of Result matrix
    for (int i = 0; i < m; i++) {
        delete[] C[i];
    }

    // Delete row pointers of Result matrix
    delete[] C;

    return 0;
}