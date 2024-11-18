#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int row=3, col=4;
    double a[row][col], cur;

    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            cin >> cur;
            a[i][j] = cur;
        }
    }

    // пункт а)
    int minr=0, minc=0;
    double min=a[minr][minc];
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                minr = i;
                minc = j;
            }
        }
    }
    cout << "Минимальный элемент: " << min << endl;
    cout << "Номер строки и столбца: " << minr << " и " << minc << endl;
    cout << endl;

    // пункт б
    double temp[row];
    for (int i=0; i<row; i++) {
        temp[i] = a[i][col-1];
        a[i][col-1] = a[i][minc];
        a[i][minc] = temp[i];
    }
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // пункт в)
    double x[col], cur_sum;
    for (int j=0; j<col; j++) {
        cur_sum = 0;
        for (int i=0; i<row; i++) {
            if (a[i][j] > 0) {
                cur_sum += a[i][j];
            }
        }
        x[j] = cur_sum;
    }
    for (int j=0; j < col; j++) {
        cout << x[j] << " ";
    }
    cout << endl << endl;

    // пункт г
    for (int j=0; j < col; j++) {
        a[0][j] = min;
    }
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
