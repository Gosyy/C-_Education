#include <iostream>
using namespace std;

struct fraction
{
    int num;
    int denum;
};

int main()
{
    fraction a, b;
    cout << " \n Введите две дроби в формате num/denum \n" << endl;
    char ch = '/';
    cin >> a.num >> ch >> a.denum;
    cin >> b.num >> ch >> b.denum;

    int sum_num = a.num * b.denum + a.denum * b.num;
    int sum_denum = b.denum * a.denum;

    cout << "\n Сумма дробей: \n" << sum_num << ch << sum_denum << endl;
}