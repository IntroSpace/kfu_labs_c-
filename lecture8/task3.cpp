#include <iostream>
using namespace std;

bool f(double x, double& res) {
    if (x == 0 || x == 1) return false;
    if (x <= 2) {
        res = ((2 * x) + (1. / (1 - x))) / (3 * x);
    } else if (x <= 5) {
        res = 72. / 7;
    } else {
        res = -3 - x;
    }
    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double a, b, f1, f2, f3;
    cin >> a >> b;

    if (f(2, f1) && f(0, f2) && f(a, f3)) {
        cout << f1 - f2 * f3;
    } else {
        cout << "Невозможно посчитать";
    }
    cout << endl;

    if (f(2 * a, f1) && f(6, f2) && f(a * b, f3)) {
        cout << f1 - f2 + f3;
    } else {
        cout << "Невозможно посчитать";
    }
    cout << endl;
    
    return 0;
}
