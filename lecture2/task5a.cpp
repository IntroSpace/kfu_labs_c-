#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double r, a, b;
    cin >> r >> a >> b;

    if (r <= a && r <= b) {
        cout << "Уместится" << endl;

        double z, c;
        cin >> z >> c;

        if (z <= c) {
            cout << "Уместится полностью";
        } else {
            cout << "Верх не уместится";
        }
    } else {
        cout << "Торт не уместится";
    }
    
    return 0;
}
