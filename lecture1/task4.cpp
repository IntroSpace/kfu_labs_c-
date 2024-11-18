#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    const double PI = 3.14159;
    double radius;

    cin >> radius;
    cout << (4 / 3) * PI * pow(radius, 3) << endl;
    
    return 0;
}
