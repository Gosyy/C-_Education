#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << endl << "Введите первую дробь: " << endl;
    cin >> a; 
    cout << "/";
    cin >> b;

    cout << endl << endl << "Введите вторую дробь: " << endl;
    cin >> c; 
    cout << "/";
    cin >> d;

    cout << endl << endl << "Результат сложения дробей: "
         << ((a*b + b*c)/(b*d)) << endl;


    return 0;
}