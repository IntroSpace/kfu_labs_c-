#include <iostream>
using namespace std;

void to_F(double C, double& F) {
    F = (9./5) * C + 32;
}

void to_K(double C, double& K) {
    K = C + 273;
}

void to_F_and_K(double C, double& F, double& K) {
    to_F(C, F);
    to_K(C, K);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double C1, C2, F, K;
    cin >> C1 >> C2;

    // пункты 1 и 2
    to_F(C1, F);
    to_K(C1, K);
    cout << F << "°F и " << K << "°K" << endl;

    // пункт 3
    to_F_and_K(C2, F, K);
    cout << F << "°F и " << K << "°K" << endl;
    
    return 0;
}
