#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int d1, m1, y1, d2, m2, y2, age;
    
    cout << "Введите дату рождения в формате DD MM YY: ";
    cin >> d1 >> m1 >> y1;
    cout << "Введите текущую дату в формате DD MM YY: ";
    cin >> d2 >> m2 >> y2;

    age = y2 - y1;
    if (m2 < m1 || (m2 == m1 && d2 < d1)) {
        age -= 1;
    }

    cout << "Вам " << age << " ";
    if (age % 10 == 0 || age % 10 >= 5 || (11 <= age % 100 && age % 100 <= 19)) {
        cout << "лет";
    } else if (age % 10 == 1) {
        cout << "год";
    } else {
        cout << "года";
    }
    
    return 0;
}
