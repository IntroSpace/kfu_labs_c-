#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    double x, resA=0, resB=0;

    cin >> n >> x;

    for (int i=0; i < n; i++) {
        resA = cos(x + resA);
    }

    for (int i=0; i < n; i++) {
        resB = sqrt(x + resB);
    }

    cout << "Результат пункта a) " << resA << endl;
    cout << "Результат пункта b) " << resB << endl;
    
    return 0;
}
