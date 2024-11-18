#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int cur, count=0, even_count=0;
    cin >> cur;
    do {
        if ((cur & 1) == 0) {
            even_count++;
        }
        count++;
    } while (cin >> cur);

    cout << "Всего чисел: " << count << endl;
    cout << "Среди них чётных чисел: " << even_count << endl;
    
    return 0;
}
