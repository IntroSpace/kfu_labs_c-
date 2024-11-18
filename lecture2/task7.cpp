#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double a, b;
    char oper;

    cin >> a >> b;
    cin >> oper;

    switch (oper) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        
        default: cout << "Неверная операция";
    }
    
    return 0;
}
