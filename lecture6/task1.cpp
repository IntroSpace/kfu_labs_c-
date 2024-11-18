#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    // 1.1 пункт
    double var1 = 1.5, var2 = M_PI;

    std::cout << "Значения переменных: " << var1 << ", " << var2 << std::endl;
    std::cout << "Адреса переменных: " << &var1 << ", " << &var2 << std::endl;
    std::cout << "Разность адресов: " << (uintptr_t)&var1 - (uintptr_t)&var2 << std::endl;
    std::cout << "Размер переменных: " << sizeof(var1) << " байт" << std::endl;

    // 1.2 пункт
    double array[5] = {1.5, M_PI, -0.7, 3.0, -2.4};
    std::cout << "Значения и адреса элементов массива:" << std::endl;
    std::cout << "*array = " << *array << ", адрес = " << array << std::endl;
    std::cout << "*(array + 1) = " << *(array + 1) << ", адрес = " << (array + 1) << std::endl;
    std::cout << "*(array + 4) = " << *(array + 4) << ", адрес = " << (array + 4) << std::endl;
    std::cout << "Разность адресов 1-го и 2-го элементов: " << (uintptr_t)(array + 1) - (uintptr_t)(array) << std::endl;

    // 1.3 пункт
    double* dynamic_var1 = new double(var1 + var2);
    double* dynamic_var2 = new double(var1 - var2);

    std::cout << "Динамическая переменная 1: значение = " << *dynamic_var1 << ", адрес = " << dynamic_var1 << std::endl;
    std::cout << "Динамическая переменная 2: значение = " << *dynamic_var2 << ", адрес = " << dynamic_var2 << std::endl;
    std::cout << "Разность адресов: " << (uintptr_t)dynamic_var1 - (uintptr_t)dynamic_var2 << std::endl;

    delete dynamic_var1;
    delete dynamic_var2;
    
    return 0;
}
