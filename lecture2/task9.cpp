#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, y;
    cin >> x >> y;

    // пункт а)
    if (-2 <= x <= 0 && 0 <= y && y <= 1) {
        cout << "Принадлежит пункту а)" << endl;
    } else {
        cout << "Не принадлежит пункту а)" << endl;
    }

    // пункт б)
    if (x * x + y * y <= 25 && y >= 0) {
        cout << "Принадлежит пункту б)" << endl;
    } else {
        cout << "Не принадлежит пункту б)" << endl;
    }

    // пункт в)
    if (x * x + y * y >= 9 && x * x + y * y <= 36 && x >= 0) {
        cout << "Принадлежит пункту в)" << endl;
    } else {
        cout << "Не принадлежит пункту в)" << endl;
    }

    // пункт г)
    if (y <= -2 * x + 2 && x >=0 && y >= 0) {
        cout << "Принадлежит пункту г)" << endl;
    } else {
        cout << "Не принадлежит пункту г)" << endl;
    }
    
    return 0;
}
