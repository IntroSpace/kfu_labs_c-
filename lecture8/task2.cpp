#include <iostream>
using namespace std;

const short ZERO_X=0, ONE_X=1, TWO_X=2, NOT_SQUARE=-1;

short square_answer(double a, double b, double c, double& x1, double& x2) {
    double D = b*b - 4 * a * c;
    if (a == 0) return NOT_SQUARE;
    if (D < 0) return ZERO_X;
    if (D == 0) {
        x1 = (-b) / (2 * a);
        x2 = x1;
        return ONE_X;
    }
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    return TWO_X;
}

void print_answer(double a, double b, double c, double& x1, double& x2) {
    short count = square_answer(a, b, c, x1, x2);
    if (count == ZERO_X) {
        cout << "Решений нет" << endl;
    } else if (count == ONE_X) {
        cout << "Есть одно решение: " << x1 << endl;
    } else if (count == TWO_X) {
        cout << "Есть два решения: " << x1 << " и " << x2 << endl;
    } else {
        cout << "Ошибка в квадратном уравнении" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x1, x2;

    // 1 пример
    print_answer(4, -5, 1, x1, x2);

    // 2 пример
    print_answer(13, 2, 5, x1, x2);

    // 3 пример
    print_answer(1, -4, 4, x1, x2);
    
    return 0;
}
