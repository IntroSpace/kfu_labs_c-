// Выводятся строки как для 4, так и для 3, так как итерация switch'а не прерывается (с помощью break)

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int x;
    cout << "Введите свою оценку: ";
    cin >> x;

    switch (x) {
        case 5: cout << "Отлично"; break;
        case 4: cout << "Хорошо";
        case 3: cout << "Удовлетворительно"; break;

        case 2: 
        case 1: cout << "Плохо"; break;
        default: cout << "Неверные данные";
    }
    
    return 0;
}
