#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n=7, x[n], y[n];
    mt19937 mt(time(nullptr));
    for (int i=0; i < n; i++) {
        x[i] = mt() % 20;
        cout << x[i] << " ";
    }
    cout << endl;

    for (int i=0; i < n; i++) {
        y[i] = mt() % 20;
        cout << y[i] << " ";
    }
    cout << endl;

    // пункт а)
    int resA[3 * n];
    for (int i=0; i < n; i++) {
        resA[3 * i] = x[i];
        resA[3 * i + 1] = y[i];
        resA[3 * i + 2] = x[i] + y[i];
    }
    for (int i=0; i < 3 * n; i++) {
        cout << resA[i] << " ";
    }
    cout << endl;

    // пункт б)
    int resB[2 * n];
    for (int i=0; i < n; i++) {
        resB[2 * i] = x[n - 1 - i];
        resB[2 * i + 1] = y[i] + x[(i + 1) % n];
    }
    for (int i=0; i < 2 * n; i++) {
        cout << resB[i] << " ";
    }
    cout << endl;
    
    return 0;
}
