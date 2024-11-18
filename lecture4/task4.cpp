#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n=10, nums[n], w, cur;
    
    for (int i=0; i < n; i++) {
        cin >> cur;
        nums[i] = cur;
    }
    cin >> w;

    for (int i=0; i < n - 1; i++) {
        for (int j=i + 1; j < n; j++) {
            if (nums[i] + nums[j] == w) {
                cout << "Числа: " << nums[i] << " " << nums[j] << endl;
                cout << "Индексы: " << i << " " << j << endl;
                cout << endl;
            }
        }
    }
    
    return 0;
}
