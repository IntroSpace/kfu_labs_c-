#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int x, y, z;
    cin >> x >> y >> z;

    // пункт а)
    cout << (x > 10 ? x : 0) + (y > 10 ? y : 0) + (z > 10 ? z : 0) << endl;

    // пункт б)
    cout << (x % 2 == 0 ? 1 : 0) + (y % 2 == 0 ? 1 : 0) + (z % 2 == 0 ? 1 : 0) << endl;

    // пункт в)
    if ((x >= y && x <= z) || (x >= z && x <= y)) {
        cout << x << endl;
    } else if ((y >= x && y <= z) || (y >= z && y <= x)) {
        cout << y << endl;
    } else {
        cout << z << endl;
    }

    // пункт г)
    if (x <= y && x <= z) {
        cout << 1 << endl;
    } else if (y <= x && y <= z) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
    
    return 0;
}
