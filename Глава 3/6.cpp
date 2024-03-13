#include <iostream>
using namespace std;

int main()
{
    unsigned int numb;
    unsigned long fact = 1;
    cout << "\n" << "Введите целое число: ";
    cin >> numb;

    do
    {
        for (int j=numb; j>0; j--) fact *= j;
        cout << "Факториал числа " << numb << " равен: " << fact << endl;
        fact = 1;
        cout << "\n" << "Введите целое число: ";
        cin >> numb;

    } while (numb != 0);
    
    return 0;
}