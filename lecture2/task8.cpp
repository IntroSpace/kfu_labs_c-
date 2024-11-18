#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double x, y, dist_sq;
    cin >> x >> y;
    dist_sq = x * x + y * y;

    if (dist_sq <= 4) {
        cout << "10 очков";
    } else if (dist_sq <= 16) {
        cout << "5 очков";
    } else {
        cout << "0 очков";
    }
    
    return 0;
}
