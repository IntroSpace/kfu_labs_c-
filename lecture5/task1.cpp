#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int row=2, col=3, a[row][col], sum=0, mul=1;
    mt19937 mt(time(nullptr));

    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            a[i][j] = mt() % 31;
        }
    }

    // пункт а)
    cout << "Массив:" << endl;
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // пункт б)
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            sum += a[i][j];
        }
    }
    if (sum % 2 == 0) {
        cout << "Сумма всех элементов является чётной" << endl;
    } else {
        cout << "Сумма всех элементов является нечётной" << endl;
    }
    cout << endl;

    // пункт б)
    sum = 0;
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            if (a[i][j] >= 2 && a[i][j] <= 9) {
                sum += a[i][j];
                mul *= a[i][j];
            }
        }
    }
    cout << "Сумма чисел в диапазоне [2, 9]: " << sum << endl;
    if (mul > 1) {
        cout << "Произведение чисел в диапазоне [2, 9]: " << mul << endl;
    }
    
    return 0;
}
