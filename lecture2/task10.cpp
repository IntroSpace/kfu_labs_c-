#include <iostream>
using namespace std;

double sq(double num) {
    return num * num;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, y, z;
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x) {
        cout << "Существует такой ";

        if (x == y == z) {
            cout << "равносторонний ";
        } else if (x == y || x == z || y == z) {
            cout << "равнобедренный ";
        }

        if (sq(x) + sq(y) == sq(z) || sq(x) + sq(z) == sq(y) || sq(y) + sq(z) == sq(x)) {
            cout << "прямоугольный ";
        }

        cout << "треугольник" << endl;
    } else {
        cout << "Не существует такого треугольника" << endl;
    }
    
    return 0;
}
