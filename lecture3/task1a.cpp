#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int tC = 0;
    while (tC <= 100) {
        cout << tC << "°C = " << (tC * 9 / 5 + 32) << "°F" << endl;
        tC += 10;
    }
    
    return 0;
}
