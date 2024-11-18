#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "x\ty" << endl << endl;
    
    for (int i = 0; i <= 12; i++) {
        if (i % 6 == 0) {
            if (i == 0) cout << 0;
            else if (i / 6 == 1) cout << "π";
            else if (i / 6 == -1) cout << "-π";
            else cout << i / 6 << "π";
        } else {
            if (i == 1) cout << "";
            else if (i == -1) cout << "-";
            else cout << i;

            cout << "π/6";
        }

        cout << "\t" << cos(((double) i) * M_PI / 6) << endl;
    }
    
    return 0;
}
