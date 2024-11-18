#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a, b;
    cin >> a >> b;

    cout << (a % 10) + (b % 10);
    
    return 0;
}
