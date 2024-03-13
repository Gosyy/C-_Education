#include <iostream>
using namespace std;

struct sterling
{
    int pounds;
    int shilling;
    int pence;
};

int main()
{
    sterling old;
    cout << "\n Введите сумму в десятичных фунтах (до сотых): " << endl;
    double funt;
    cin >> funt;

    int f = funt * 100;
    f %= 100;
    f *= 2.4;
    f = (int) f;
    
    cout << "\n Сумма по старой системе: \n" << endl;
    cout << (int) funt << " фунтов\n" << endl;
    cout << f/12 << " шиллингов\n" << endl;
    cout << f%12 << " пенсов\n" << endl;
}