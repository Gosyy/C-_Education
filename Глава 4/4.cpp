#include <iostream>
using namespace std;

struct employee
{
    int number;
    float allowance_$;
};

int main()
{
    employee a, b, c;

    cout << "\n Введите номер сотрудника и пособие в $: " << endl;
    cin >> a.number >> a.allowance_$;

    cout << "\n Введите номер сотрудника и пособие в $: " << endl;
    cin >> b.number >> b.allowance_$;

    cout << "\n Введите номер сотрудника и пособие в $: " << endl;
    cin >> c.number >> c.allowance_$;

    cout << "\n\n\n Номер сотрудника и пособие в $: " << a.number << " " << a.allowance_$ << "$" << endl;
    cout << "\n Номер сотрудника и пособие в $: " << b.number << " " << b.allowance_$ << "$" << endl;
    cout << "\n Номер сотрудника и пособие в $: " << c.number << " " << c.allowance_$ << "$" << endl;

    return 0;
}