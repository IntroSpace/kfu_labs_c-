#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double a[10][10];

    // пункт а
    int n=5;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if (i == j) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    cout << "n = " << n << endl;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // пункт б
    n=6;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if (j >= i) {
                a[i][j] = n - (j - i);
            } else {
                a[i][j] = 0;
            }
        }
    }
    cout << "n = " << n << endl;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // пункт в
    n=5;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if (j >= n - i - 1) {
                a[i][j] = (i + j) - n + 2;
            } else {
                a[i][j] = 0;
            }
        }
    }
    cout << "n = " << n << endl;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // пункт г
    n=8;

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    cout << "n = " << n << endl;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // пункт д
    n=10;

    for (int i=n / 2; i >= 0; --i) {
        for (int r=0; r < n; r++) {
            if (r >= i and r <= n - i - 1) {
                a[r][i] = n / 2 - i - 1;
                a[r][n - i - 1] = n / 2 - i - 1;
            }
        }
        for (int c=0; c < n; c++) {
            if (c >= i and c <= n - i - 1) {
                a[i][c] = n / 2 - i - 1;
                a[n - i - 1][c] = n / 2 - i - 1;
            }
        }
    }
    cout << "n = " << n << endl;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
