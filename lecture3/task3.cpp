#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    double sum=0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }

    cout << sum;
    
    return 0;
}
