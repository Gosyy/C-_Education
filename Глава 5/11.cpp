#include <iostream>
using namespace std;

struct sterling
{
    int pounds;
    int shilling;
    int pence;
};

sterling sum;
char ch = '/';

void identification(sterling&);
void count(sterling&, sterling&);
void output(sterling&);

int main()
{
    sterling sum_1, sum_2;
    cout << " \n Введите первую сумму в формате фунт/шиллинг/пенс: " << endl;
    identification(sum_1);
    cout << " \n Введите вторую сумму в формате фунт/шиллинг/пенс: " << endl;
    identification(sum_2);
    count(sum_1, sum_2);
    output(sum);
    return 0;
}

void identification(sterling& sum)
{
    repeat:
    cin >> sum.pounds >> ch >> sum.shilling >> ch >> sum.pence;
    if (sum.shilling>=20 | sum.pence>=12 | sum.pounds<0 | sum.shilling<0 | sum.pence<0) 
    {
        cout << "\n Ошибка! Повторите ввод. \n";
        goto repeat;
    }
}

void count(sterling& one, sterling& two)
{
    sum.pounds = one.pounds + two.pounds + (one.shilling + two.shilling + (one.pence + two.pence)/12)/20;
    sum.shilling = (one.shilling + two.shilling + (one.pence + two.pence)/12)%20;
    sum.pence = (one.pence + two.pence)%12;
}

void output(sterling& out)
{
    cout << "\n\n Сумма денежных единиц в формате фунт/шиллинг/пенс: " << out.pounds << ch << out.shilling << ch << out.pence;
}