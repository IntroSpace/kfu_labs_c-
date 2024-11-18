#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int cur, resA=0, resB=0, resC=INT_MAX;

    for (int i=0; i < 7; i++) {
        cin >> cur;

        if (cur < 0) {
            resA += 1;
        }

        if (cur == cur % 100) {
            resB += cur;
        }

        if (cur < resC) {
            resC = cur;
        }
    }

    cout << "Результат пункта a) " << resA << endl;
    cout << "Результат пункта b) " << resB << endl;
    cout << "Результат пункта c) " << resC << endl;
    
    return 0;
}
