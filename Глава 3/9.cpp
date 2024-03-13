#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    flag:
    cout << "\n Введите количество мест: "; cin >> a;
    cout << "\n Введите количество гостей: "; cin >> b;
    c=b;

    if (a>b) 
    {
        cout << "\n \t Количество гостей не должно быть меньше количества мест. \n";
        goto flag;
    }

    for (int i = 1; i < a; i++)
    {
        c*=--b;
    }

    cout << "\n Число возможных рассадок гостей за столом составляет " << c;

    return 0;
}