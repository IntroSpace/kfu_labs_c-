#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int dM, dW;
    cout << "Введите дату\n";
    cout << "День месяца: ";
    cin >> dM;
    cout << "Номер дня в неделе: ";
    cin >> dW;
    
    if (dM == 13) {
        if (dW == 2 || dW == 5)
            cout << "неудачный день";
    } else if (dM == 17) {
        if (dW == 5)
            cout << "неудачный день";
    }
    
    return 0;
}
