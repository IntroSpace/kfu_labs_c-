#include <iostream>
using namespace std;

int fact(int n) {
    int res=1;
    for (int i=1; i <=  n; i++) {
        res *= i;
    }
    return res;
}

int step(int x, int n) {
    int res=1;
    for (int i=0; i < n; i++) {
        res *= x;
    }
    return res;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, M, x, n;

    // пункт a
    cin >> N >> M;
    cout << (fact(N) * fact(M) * 1.) / fact(N + M) << endl;

    // пункт b
    cin >> x >> n;
    cout << step(x, n) - step(x, n-1) << endl;
    
    return 0;
}
