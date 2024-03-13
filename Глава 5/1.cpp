#include <iostream>
#include <math.h>
using namespace std;

float circarea (float);

int main()
{
    float r;
    cout << "\n\n Введите радиус окружности: " << endl;
    cin >> r;
    cout << "\n\n Площать окружности равна: " << circarea(r) << endl;
    return 0;
}

float circarea (float r)
{
    return r*r*M_PI;
}