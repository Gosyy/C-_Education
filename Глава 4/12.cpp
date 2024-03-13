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
    int sum_num, sum_denum;
    cout << " \n Введите две дроби в формате числитель/знаменатель через операцию +, -, *, /: \n" << endl;
    char ch = '/', operation;
    cin >> a.num >> ch >> a.denum;
    cin >> operation;
    cin >> b.num >> ch >> b.denum;

    switch (operation)
    {
        case '+': sum_num = a.num * b.denum + a.denum * b.num; sum_denum = b.denum * a.denum; break;
        case '-': sum_num = a.num * b.denum - a.denum * b.num; sum_denum = b.denum * a.denum; break;
        case '*': sum_num = a.num * b.num; sum_denum = b.denum * a.denum; break;
        case '/': sum_num = a.num * b.denum; sum_denum = b.num * a.denum; break;
    }

    cout << "\n\n" << a.num << ch << a.denum << operation << b.num << ch << b.denum << " = " << sum_num << ch << sum_denum << endl;
    
    return 0;
}