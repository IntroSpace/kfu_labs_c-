#include <iostream>
using namespace std;

char symbol(int n) {
    if (n == 0 || abs(n) > 10) {
        return ' ';
    }
    if (n < 0) {
        return '-';
    }
    return '+';
}

void print_num(int n) {
    n = abs(n);
    switch (n) {
        case 0: cout << "ноль"; break;
        case 1: cout << "один"; break;
        case 2: cout << "два"; break;
        case 3: cout << "три"; break;
        case 4: cout << "четыре"; break;
        case 5: cout << "пять"; break;
        case 6: cout << "шесть"; break;
        case 7: cout << "семь"; break;
        case 8: cout << "восемь"; break;
        case 9: cout << "девять"; break;
        case 10: cout << "десять"; break;
        default: cout << "не знаю такого";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    cin >> n;

    cout << symbol(n);
    print_num(n);
    cout << endl;
    
    return 0;
}
