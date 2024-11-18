#include <iostream>
using namespace std;

// пункт a
void inputMatrix(int rows, int cols, int matrix[][10]) {
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// пункт b
void printMatrix(int rows, int cols, const int matrix[][10]) {
    cout << "Матрица:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// пункт c
void squareMatrix(int rows, int cols, const int matrix[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * matrix[i][j];
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int rows = 3, cols = 3;
    int matrix[rows][10], result[rows][10];

    inputMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);

    squareMatrix(rows, cols, matrix, result);
    printMatrix(rows, cols, result);

    return 0;
}
