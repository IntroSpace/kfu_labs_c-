#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;

    cin >> a >> b;
    
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    
    return 0;
}
