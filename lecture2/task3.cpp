#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x;
    cin >> x;

    // пункт а)
    if (x <= -2)
        x = 0;
    else if (x <= 10)
        x = pow(x, 2) + 4 * x + 5;
    else
        x = 1 / (pow(x, 2) + 4 * x - 5);
    
    // пункт б)    (если я правильно понял про числовое значение)
    if (x == (double) ((int) x))
        cout << (int) x;
    else
        cout << "Получился нецелочисленный результат: " << x;
    
    return 0;
}
