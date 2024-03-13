#include <iostream>
using namespace std;

int main()
{
    const unsigned char sum_uk = 0;
    char ch = 'y';
    unsigned int a0, a1, a2, b0, b1, b2;

    do
    {
        cout << "Введите первую сумму: " << sum_uk; cin >> a0;
        cout << "."; cin >> a1; cout << "."; cin >> a2;

        cout << "Введите вторую сумму: " << sum_uk; cin >> b0;
        cout << "."; cin >> b1; cout << "."; cin >> b2;

        a1 += (a2+b2)/12;
        a2 = (a2+b2)%12;

        a0 += (a1+b1)/20;
        a1 = (a1+b1)%20;

        a0 += b0;

        cout << "\n" << "Результат сложения: " << sum_uk
             << a0 << "." << a1 << "." << a2 << endl;

        cout << "Повторить? y/n: "; cin >> ch;

    } while (ch != 'n');

    return 0;
}