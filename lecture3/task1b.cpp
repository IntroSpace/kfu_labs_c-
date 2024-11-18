#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x = 0;
    do {
        cout << "При x = " << x << ":\ty = " << log10(x + 1) * sin(x) << endl;
        x += 0.5;
    } while (x <= 5);
    
    return 0;
}
