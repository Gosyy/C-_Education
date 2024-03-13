#include <iostream>
using namespace std;

int main()
{
    double money, procent, years;

    cout << "\n" << "Введите начальный вклад в рублях: "; cin >> money;
    cout << "\n" << "Введите количество лет: "; cin >> years;
    cout << "\n" << "Введите процентную ставку: "; cin >> procent;

    for (int i = 0; i < years; i++) money += (money*procent/100);

    cout << "\n" << "Сумма по истечении " << years
         << " год/года/лет составит: " << money << " руб" << "\n";

    return 0;
}