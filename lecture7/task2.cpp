#include <iostream>
#include <cmath>
using namespace std;

double path(double x, double y, double to_x, double to_y) {
    return sqrt(pow(to_x - x, 2) + pow(to_y - y, 2));
}

double square(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    // пункт а
    cout << path(x1, y1, x2, y2) << endl;

    // пункт b
    cout << path(x1, y1, 0, 0) << " " << path(x2, y2, 0, 0) << endl;

    // пункт c
    cin >> x3 >> y3;
    cout << square(path(x1, y1, x2, y2), path(x2, y2, x3, y3), path(x1, y1, x3, y3)) << endl;

    // пункт d
    cin >> x4 >> y4;
    double first = square(path(x1, y1, x2, y2), path(x2, y2, x3, y3), path(x1, y1, x3, y3));
    double second = square(path(x1, y1, x4, y4), path(x4, y4, x3, y3), path(x1, y1, x3, y3));
    cout << first + second << endl;
    
    return 0;
}
