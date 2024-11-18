#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    if (x < 0) return 7.0 / 3;
    if (x < 2 * M_PI) return pow(x, 2) - 3;
    return (1 + pow(x, 3)) / (2 * x);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    
    // пункт а
    cin >> a >> b;
    cout << 12.5 + f(2.) - f(4.) * f(10.) + f(a) - f(b) + f(a * b) << endl;

    // пункт b
    double x[7], y[7], cur;
    for (int i=0; i < 7; i++) {
        cin >> cur;
        x[i] = cur;
        y[i] = f(x[i]);
    }
    for (int i=0; i < 7; i++) {
        cout << y[i] << " = f(" << x[i] << ")" << endl;
    }

    int count=0, mx=y[0];
    for (int i=0; i < 7; i++) {
        if (y[i] < 0) {
            count++;
        }
        if (y[i] > mx) {
            mx = y[i];
        }
    }
    cout << "<0: " << count << ", max = " << mx << endl;
    
    return 0;
}
