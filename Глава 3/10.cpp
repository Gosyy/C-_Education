#include <iostream>
using namespace std;

int main()
{
    double start, procent, sum;
    int years = 0;

    cout << "\n" << "Введите начальный вклад в рублях: "; cin >> start;
    cout << "\n" << "Введите процентную ставку: "; cin >> procent;
    cout << "\n" << "Введите желаемую сумму: "; cin >> sum;

    while (sum > start)
    {
        start+=start*procent/100;
        ++years;
    }

    cout << "\n" << years;

    return 0;
}