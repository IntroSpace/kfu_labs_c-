#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int nums[10], cur;
    for (int i=0; i < 10; i++) {
        cin >> cur;
        nums[i] = cur;
    }

    cout << endl;

    // пункт а)
    cout << nums[1] << endl;
    cout << nums[8] << endl;
    cout << endl;

    // пункт б)
    for (int i=1; i < 10; i += 2) {
        cout << i << "-й индекс: " << nums[i] << endl;
    }
    cout << endl;
    
    // пункт в)
    double sum=0;
    for (int i=0; i < 10; i++) {
        sum += nums[i];
    }
    cout << sum / 10 << endl;
    cout << endl;

    // пункт г)
    int second[10] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};
    for (int i=0; i < 10; i++) {
        cout << nums[i] << " + ";
        if (second[i] < 0) {
            cout << "(" << second[i] << ")";
        } else {
            cout << second[i];
        }
        cout << " = " << nums[i] + second[i] << endl;
    }

    
    return 0;
}
