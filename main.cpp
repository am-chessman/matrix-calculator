#include <iostream>

using namespace std;

int main() {
    int matrixSize;

    cout << "Enter the size of the matrices: ";
    cin >> matrixSize;

    // Allocate memory for matrices
    int** matrix1 = new int* [matrixSize];
    int** matrix2 = new int* [matrixSize];

    for (int i = 0; i < matrixSize; i++) {
        matrix1[i] = new int[matrixSize];
        matrix2[i] = new int[matrixSize];
    }

    // Input elements for matrix1
    cout << "Enter " << matrixSize * matrixSize << " elements for Matrix 1:\n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for matrix2
    cout << "Enter " << matrixSize * matrixSize << " elements for Matrix 2:\n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Print Matrix 1
    cout << "Matrix 1:\n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Print Matrix 2
    cout << "Matrix 2:\n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory properly
    for (int i = 0; i < matrixSize; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;

    return 0;
}
