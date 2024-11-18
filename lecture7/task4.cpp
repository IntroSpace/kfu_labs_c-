#include <iostream>
using namespace std;

void sq1() {
    int n=4;
    for (int i=0; i < n; i++) {
        for (int i=0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void sq2(int n) {
    for (int i=0; i < n; i++) {
        for (int i=0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void sq3(int n, int m) {
    for (int i=0; i < n; i++) {
        for (int i=0; i < n+m; i++) {
            if (i < m) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void sq4(int n, int m) {
    for (int i=0; i < n*m; i++) {
        for (int j=0; j < n*m; j++) {
            if (((i / m) + (j / m)) % 2 == 0) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    
    // пункт a
    sq1();

    // пункт b
    cin >> n;
    sq2(n);

    // пункт c
    cin >> n;
    cin >> m;
    sq3(n, m);

    // пункт d
    cin >> n;
    cin >> m;
    sq4(n, m);
    
    return 0;
}
