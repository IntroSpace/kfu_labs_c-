#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    std::cout << "Введите размер матрицы n: ";
    std::cin >> n;

    double** matrix = new double*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new double[n];
    }

    std::cout << "Введите элементы матрицы:" << std::endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> matrix[i][j];

    // 3.1 пункт
    int* zero_counts = new int[n];
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            zero_counts[j] = 0;
        }
    }
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] == 0) zero_counts[j]++;
        }
    }
    std::cout << "Количество нулевых элементов в столбцах:" << std::endl;
    for (int j = 0; j < n; ++j) {
        std::cout << zero_counts[j] << " ";
    }
    std::cout << std::endl;

    // 3.2 пункт
    double diagonal_product = 1.0;
    for (int i = 0; i < n; ++i) {
        diagonal_product *= matrix[i][n - 1 - i];
    }
    std::cout << "Произведение элементов побочной диагонали: " << diagonal_product << std::endl;

    // 3.3 пункт
    int positive_count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (matrix[i][j] > 0) positive_count++;
        }
    }
    std::cout << "Количество положительных элементов над главной диагональю: " << positive_count << std::endl;

    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] zero_counts;
    
    return 0;
}
