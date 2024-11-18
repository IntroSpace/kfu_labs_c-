#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int days = 7;
    int* counts = new int[days];

    std::cout << "Введите количество замеров температуры для каждого дня недели:" << std::endl;
    for (int i = 0; i < days; ++i) {
        std::cin >> counts[i];
    }

    double** temperatures = new double*[days];
    for (int i = 0; i < days; ++i) {
        temperatures[i] = new double[counts[i]];
    }

    std::cout << "Введите температуры:" << std::endl;
    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            std::cin >> temperatures[i][j];
        }
    }

    // a) минимальная температура в первый день
    double min_temp = temperatures[0][0];
    for (int j = 1; j < counts[0]; ++j) {
        if (temperatures[0][j] < min_temp) min_temp = temperatures[0][j];
    }
    std::cout << "Минимальная температура в первый день: " << min_temp << std::endl;

    // b) количество отрицательных температур в выходные дни
    int negative_count = 0;
    for (int i = 5; i <= 6; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            if (temperatures[i][j] < 0) negative_count++;
        }
    }
    std::cout << "Количество отрицательных температур в выходные дни: " << negative_count << std::endl;

    // c) максимальная температура и день недели
    double max_temp = temperatures[0][0];
    int max_day = 0;
    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < counts[i]; ++j) {
            if (temperatures[i][j] > max_temp) {
                max_temp = temperatures[i][j];
                max_day = i;
            }
        }
    }
    std::cout << "Максимальная температура: " << max_temp << ", день: " << max_day + 1 << std::endl;

    // d) средняя температура по первым замерам
    double avg_temp = 0.0;
    for (int i = 0; i < days; ++i) {
        avg_temp += temperatures[i][0];
    }
    avg_temp /= days;
    std::cout << "Средняя температура по первым замерам: " << avg_temp << std::endl;

    for (int i = 0; i < days; ++i) {
        delete[] temperatures[i];
    }
    delete[] temperatures;
    delete[] counts;
    
    return 0;
}
