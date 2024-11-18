#include <iostream>
#include <math.h>
using namespace std;

double sq(double cur) {
    return cur * cur;
}

double rast(double x1, double y1, double x2, double y2) {
    return sqrt(sq(x2 - x1) + sq(y2 - y1));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    double px, py, cx, cy, first_x, first_y, res=0;

    cin >> n;

    while (n < 3) {
        cout << "Введите корректное количество вершин (> 2): ";
        cin >> n;
    }

    cin >> first_x >> first_y;
    px = first_x;
    py = first_y;

    for (int i=0; i < n - 1; i++) {
        cin >> cx >> cy;
        res += rast(px, py, cx, cy);
        px = cx;
        py = cy;
    }
    res += rast(px, py, first_x, first_y);

    cout << res << endl;
    
    return 0;
}
