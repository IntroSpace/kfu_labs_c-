#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// пункт a
void inputArray(int* arr, int size) {
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// пункт b
void printArray(const int* arr, int size) {
    cout << "Массив:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "]: " << arr[i] << endl;
    }
}

// пункт c
int scalarProduct(const int* arr1, const int* arr2, int size) {
    int product = 0;
    for (int i = 0; i < size; i++) {
        product += arr1[i] * arr2[i];
    }
    return product;
}

// пункт d
void addArrays(const int* arr1, const int* arr2, int* result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

// пункт e
int* multiplyByScalar(const int* arr, int size, int scalar) {
    int* result = new int[size];
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * scalar;
    }
    return result;
}

// пункт f
int findOrNearest(int arr[], int size, int target) {
    int closest = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return arr[i];
        if (arr[i] > target && arr[i] < closest) closest = arr[i];
    }
    return closest;
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int size = 5;
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {5, 4, 3, 2, 1};
    int result[size];
    int* scalarResult;

    inputArray(arr1, size);
    printArray(arr1, size);

    cout << "Скалярное произведение: " << scalarProduct(arr1, arr2, size) << endl;

    addArrays(arr1, arr2, result, size);
    printArray(result, size);

    scalarResult = multiplyByScalar(arr1, size, 2);
    printArray(scalarResult, size);
    delete[] scalarResult;

    cout << "Ближайший больший элемент: " << findOrNearest(arr1, size, 3) << endl;

    return 0;
}
