#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    char w='o', b='*';

    cin >> n;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << w;
            } else {
                cout << b;
            }
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
