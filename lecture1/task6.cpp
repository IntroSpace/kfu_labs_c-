#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius, height, volume, area;

    cout << "Введите радиус = ";
    cin >> radius;

    cout << "Введите высоту = ";
    cin >> height;

    volume = 2 * M_PI * radius * height;
    area = 2 * M_PI * radius * (height + radius);

    cout << "Объем = " << volume << endl;
    cout << "Площадь поверхности = " << area;
    
    return 0;
}
