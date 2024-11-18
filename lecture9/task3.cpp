#include <iostream>
#include <random>
#include <ctime>
using namespace std;

mt19937 mt(time(nullptr));

void printArray(int* array, int n) {
    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// пункт a
void fillMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = mt() % 100;
        }
    }
}

// пункт b
void printMatrix(int** matrix, int rows, int cols) {
    cout << "Матрица:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// пункт c
void rowSums(int** matrix, int rows, int cols, int* result) {
    for (int i = 0; i < rows; i++) {
        result[i] = 0;
        for (int j = 0; j < cols; j++) {
            result[i] += matrix[i][j];
        }
    }
}

// пункт d
int* colMins(int** matrix, int rows, int cols) {
    int* result = new int[cols];
    for (int j = 0; j < cols; j++) {
        result[j] = matrix[0][j];
        for (int i = 1; i < rows; i++) {
            if (matrix[i][j] < result[j]) {
                result[j] = matrix[i][j];
            }
        }
    }
    return result;
}

// пункт e
int** multiplyMatrices(int** matrix1, int** matrix2, int rows1, int cols1, int cols2) {
    int** result = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        result[i] = new int[cols2];
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int rows = 3, cols = 3;

    int** matrix1 = new int*[rows];
    int** matrix2 = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix1[i] = new int[cols];
        matrix2[i] = new int[cols];
    }

    fillMatrix(matrix1, rows, cols);
    fillMatrix(matrix2, rows, cols);

    printMatrix(matrix1, rows, cols);
    printMatrix(matrix2, rows, cols);
    cout << endl;

    int* rowSumArray = new int[rows];
    rowSums(matrix1, rows, cols, rowSumArray);
    printArray(rowSumArray, rows);
    rowSums(matrix2, rows, cols, rowSumArray);
    printArray(rowSumArray, rows);
    cout << endl;

    int* colMinArray = colMins(matrix1, rows, cols);
    printArray(colMinArray, cols);
    colMinArray = colMins(matrix2, rows, cols);
    printArray(colMinArray, cols);
    cout << endl;

    int** result = multiplyMatrices(matrix1, matrix2, rows, cols, cols);
    printMatrix(result, rows, cols);

    delete[] rowSumArray;
    delete[] colMinArray;
    for (int i = 0; i < rows; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}
