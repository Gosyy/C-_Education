#include <iostream>
using namespace std;

int main()
{
    const unsigned char sum_uk = 0;
    char ch = 'y';
    unsigned int a0, a1, a2, b0, b1, b2;
    char operand;
    int k;
    double j;

    do
    {
        cout << "\n Введите 1, если необходимо вычислить сумму или разность денежной суммы. ";
        cout << "\n Введите 2, если необходимо вычислить умножение на вещественное число. \n";
        cin >> k;

        cout << "\n Введите сумму: "; cin >> a0;
        cout << "."; cin >> a1; cout << "."; cin >> a2;

        a2 += a1*12 + a0*20*12;

        if (k==1)
        {
            cout << "\n Введите операнд + или -: "; cin >> operand;

            cout << "\n Введите вторую сумму: "; cin >> b0;
            cout << "."; cin >> b1; cout << "."; cin >> b2;

            b2 += b1*12 + b0*20*12;

            switch (operand)
            {
            case '+': a2+=b2; cout << "\n Результат сложения: " << a2/12/20 << "." << a2/12%20 << "." << a2%12%20; break;
            case '-': a2-=b2; cout << "\n Результат вычитания: " << a2/12/20 << "." << a2/12%20 << "." << a2%12%20; break;
            default:  cout << endl << "Ошибка в записи выражения\n";
            }
        }

        if (k==2)
        {
            cout << "\n Введите вещественный множитель: "; cin >> j;
            a2=abs(a2*j);
            cout << "\n Результат произведения: " << a2/12/20 << "." << a2/12%20 << "." << a2%12%20;
        }

        cout << "\n Повторить? y/n: "; cin >> ch;

    } while (ch != 'n');

    return 0;
}