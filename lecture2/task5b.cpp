#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, y, z, a, b;
    cin >> x >> y >> z >> a >> b;
    
    if (x <= a && (y <= b || z <= b)) {
        cout << "Пройдет";
    } else if (y <= a && (x <= b || z <= b)) {
        cout << "Пройдет";
    } else if (z <= a && (y <= b || x <= b)) {
        cout << "Пройдет";
    } else {
        cout << "Не пройдет";
    }
    
    return 0;
}
