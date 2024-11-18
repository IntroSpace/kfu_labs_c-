#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a;
    cin >> a;
    cout << a / 1000 << " " << a % 10;
    
    return 0;
}
