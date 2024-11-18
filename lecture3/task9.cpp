#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, count=0, mx=0;
    cin >> n;

    while (n != 0) {
        if (n > mx) {
            mx = n;
            count = 1;
        } else if (n == mx) {
            count += 1;
        }
        cin >> n;
    }

    cout << count << endl;
    
    return 0;
}
