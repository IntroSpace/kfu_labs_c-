#include <iostream>
using namespace std;

double sum(double x, double y) {
    return x + y;
}

double minuss(double x, double y) {
    return x - y;
}

double mul (double x, double y) {
    return x * y;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;
    cin >> a >> b;
    
    cout << sum(mul(5, (sum(minuss(a, 2), b))), mul(1000, a)) << endl;
    
    return 0;
}
