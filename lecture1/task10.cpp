#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double a, b, c;
    cin >> a >> b >> c;

    cout << "V = " << a * b * c << endl;
    cout << "S = " << 2 * (a * b + b * c + a * c);
    
    return 0;
}
