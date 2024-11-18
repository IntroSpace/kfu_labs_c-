#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    std::cout << "Введите размер массива n: ";
    std::cin >> n;

    double* array = new double[n];
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> *(array + i);
    }

    // 2.1 пункт
    double positive_sum = 0.0;
    for (int i = 0; i < n; ++i) {
        if (*(array + i) > 0) positive_sum += *(array + i);
    }
    std::cout << "Сумма положительных элементов: " << positive_sum << std::endl;

    // 2.2 пункт
    double min1 = *array, min2 = *array;
    for (int i = 1; i < n; ++i) {
        if (*(array + i) < min1) {
            min2 = min1;
            min1 = *(array + i);
        } else if (*(array + i) > min1 && *(array + i) < min2) {
            min2 = *(array + i);
        }
    }
    std::cout << "Второй минимум: " << min2 << std::endl;

    // 2.3 пункт
    double* modified_array = new double[n];
    for (int i = 0; i < n; ++i) {
        if (*(array + i) > 0)
            *(modified_array + i) = *(array + i) * 10;
        else
            *(modified_array + i) = *(array + i) - 100;
    }
    std::cout << "Измененный массив:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << *(modified_array + i) << " ";
    }
    std::cout << std::endl;

    // 2.4 пункт
    double scalar_product = 0.0;
    for (int i = 0; i < n; ++i) {
        scalar_product += *(array + i) * *(modified_array + i);
    }
    std::cout << "Скалярное произведение: " << scalar_product << std::endl;

    delete[] array;
    delete[] modified_array;
    
    return 0;
}
