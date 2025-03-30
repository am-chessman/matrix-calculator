#include <iostream>

using namespace std;

void sumOfMatrix()
{
    int mat[2][2];
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] + mat[i][j] << " ";
        }
        cout << endl;
    }
}

void productOfMatrix()
{
    int mat[2][2];
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] * mat[i][j] << " ";
        }
        cout << endl;
    }
}

void determinantOfMatrix()
{
    int mat[2][2];
    int determinant = 0;
    cout << "Enter 4 elements for the matrix: \n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
    int determinant1 = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
}

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

    // Calculate and print the sum of the matrices
    cout << "Sum of the matrices:\n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // // Calculate and print the product of the matrices
    cout << "Product of the matrices:\n";
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix1[i][j] * matrix2[i][j] << " ";
        }
        cout << endl;
    }

    //Determinant
    int determinant1 = (matrix1[0][0] * matrix1[1][1]) - (matrix1[0][1] * matrix1[1][0]);
    cout << "Determinant of matrix 1: " << determinant1; 

    int determinant2 = (matrix2[0][0] * matrix2[1][1]) - (matrix2[0][1] * matrix2[1][0]);
    cout << "Determinant of matrix2: " << determinant2; 
    // Free memory
    for (int i = 0; i < matrixSize; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;

    return 0;
}
