#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char operand;
    cout << endl << "Введите первое число, операцию и второе число: ";
    cin >> a >> operand >> b; 

    switch (operand)
    {
        case '+': cout << endl << "Результат сложения: " << a+b; break;
        case '-': cout << endl << "Результат вычитания: " << a-b; break;
        case '*': cout << endl << "Результат умножения: " << a*b; break;
        case '/': cout << endl << "Результат деления: " << a/b; break;
        default:  cout << endl << "Ошибка в записи выражения\n";
    }

    return 0;
}