#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n=8, fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    fibonacci[2] = 1;

    for (int i=3; i < n; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    for (int i=0; i < n; i++) {
        cout << "f(" << i << ") = " << fibonacci[i] << endl;
    }
    
    return 0;
}
