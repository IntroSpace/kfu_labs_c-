#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x = -1.5;

    while (x <= 1.5) {
        if (x > 1) {
            cout << 1 + sqrt(abs(cos(x))) << endl;
        } else if (x >= -0.5) {
            cout << x + 1 << endl;
        } else {
            cout << 1 - x * x << endl;
        }
        x += 0.25;
    }
    
    return 0;
}
