#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double tC;
    cin >> tC;

    cout << (tC * 9 / 5) + 32 << endl;
    cout << tC + 273 << endl;
    
    return 0;
}
