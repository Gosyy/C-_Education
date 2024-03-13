#include <iostream>
using namespace std;

struct fraction
{
    int num;
    int denum;
};

int sum_num, sum_denum;

void fadd(fraction&, fraction&);
void fsub(fraction&, fraction&);
void fmul(fraction&, fraction&);
void fdiv(fraction&, fraction&);

int main()
{
    fraction a, b;
    cout << " \n Введите две дроби в формате числитель/знаменатель через операцию +, -, *, /: \n" << endl;
    char ch = '/', operation;
    cin >> a.num >> ch >> a.denum;
    cin >> operation;
    cin >> b.num >> ch >> b.denum;

    switch (operation)
    {
        case '+': fadd(a, b); break;
        case '-': fsub(a, b); break;
        case '*': fmul(a, b); break;
        case '/': fdiv(a, b); break;
    }

    cout << "\n\n" << a.num << ch << a.denum << operation << b.num << ch << b.denum << " = " << sum_num << ch << sum_denum << endl;
    
    return 0;
}

void fadd(fraction& a, fraction& b)
{
    sum_num = a.num * b.denum + a.denum * b.num; sum_denum = b.denum * a.denum;
}

void fsub(fraction& a, fraction& b)
{
    sum_num = a.num * b.denum - a.denum * b.num; sum_denum = b.denum * a.denum;
}

void fmul(fraction& a, fraction& b)
{
    sum_num = a.num * b.num; sum_denum = b.denum * a.denum;
}

void fdiv(fraction& a, fraction& b)
{
    sum_num = a.num * b.denum; sum_denum = b.num * a.denum;
}