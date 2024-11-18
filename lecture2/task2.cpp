#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int num;
    cin >> num;

    // пункт а)
    if (num > 0)
        cout << "Положительное";
    else if (num == 0)
        cout << "Отрицательное";
    else
        cout << "Нуль";
    
    cout << endl;

    // пункт б)
    if (num % 2 == 0)
        cout << "Четное";
    else
        cout << "Нечетное";
    
    return 0;
}
