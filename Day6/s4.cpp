#include <iostream>
using namespace std;

void matrix1(int arr[10][10], int &r1, int &c1) {
    cout << "Enter no. of rows in 1st matrix: ";
    cin >> r1;
    cout << "Enter no. of columns in 1st matrix: ";
    cin >> c1;

    cout << "Enter elements of 1st matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "1st Matrix is:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix2(int arr[10][10], int &r2, int &c2) {
    cout << "Enter no. of rows in 2nd matrix: ";
    cin >> r2;
    cout << "Enter no. of columns in 2nd matrix: ";
    cin >> c2;

    cout << "Enter elements of 2nd matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "2nd Matrix is:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply(int m1[10][10], int m2[10][10], int res[10][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrix multiplication not possible (columns of 1st matrix must equal rows of 2nd)." << endl;
        return;
    }

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m1[10][10], m2[10][10], result[10][10];
    int r1, c1, r2, c2;

    matrix1(m1, r1, c1);
    matrix2(m2, r2, c2);

    multiply(m1, m2, result, r1, c1, r2, c2);

    return 0;
}
