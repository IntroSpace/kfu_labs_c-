#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int N;
    cin >> N;

    cout << N / 3600 << ":" << (N / 60) % 60 << ":" << N % 60;
    
    return 0;
}
