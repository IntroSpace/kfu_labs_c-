#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    long double epsilon, sum=0, delitel=1, cur=1;
    bool flag=true;
    cin >> epsilon;

    do {
        if (flag) {
            sum += delitel / cur;
        } else {
            sum -= delitel / cur;
        }
        cur += 2;
        flag = !flag;
    } while (delitel / cur >= epsilon);

    cout << sum << endl;
    
    return 0;
}
