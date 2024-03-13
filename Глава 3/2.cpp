#include <iostream>
using namespace std;

int main()
{
    float c, f;
    char n;
    cout << endl << "Нажмите: \n 1 - перевод из Цельсия в Фаренгейта \n 2 - перевод из Фаренгейта в Цельсия \n";
    cin >> n; 


    if (n==1)
    {
        cout << "\n Введите температуру в градусах Цельсия: ";
        cin >> c;

        cout << "\n" << c * 9/5 + 32 << endl;
    }
    if (n==2)
    {
        cout << "\n Введите температуру в градусах Фаренгейта: ";
        cin >> f;

        cout << "\n" << (f - 32) * 5/9 << endl;
    }
    else cout << "\n Ошибка. Введите 1 или 2 и перезапустите программу.";


    return 0;
}