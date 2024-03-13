#include <iostream>
using namespace std;

void zeroSmaller(int&, int&);

int main()
{
    int a, b;
    cout << "\n Введите два значения: " << endl;
    cin >> a >> b;
    zeroSmaller(a, b);
    cout << "\n Вывод: " << a << ", " << b << endl;
    return 0;
}

void zeroSmaller(int& numb1, int& numb2)
{
    if (numb1 > numb2)
    {
        numb2 = numb1;
        numb1 = 0;
    }
    else numb1 = 0;
}
