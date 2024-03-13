#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance lenght;
    Distance width;
    Distance height;
};

int main()
{
    Volume v;
    cout << "\n Длина помещения футов/дюймов: "; cin >> v.lenght.feet; cin >> v.lenght.inches;
    cout << "\n Ширина помещения футов/дюймов: "; cin >> v.width.feet; cin >> v.width.inches;
    cout << "\n Высота помещения футов/дюймов: "; cin >> v.height.feet; cin >> v.height.inches;

    float feet_l = v.lenght.feet + v.lenght.inches/12;
    float feet_w = v.width.feet + v.width.inches/12;
    float feet_h = v.height.feet + v.height.inches/12;

    cout << "\n Площадь помещения: " << feet_l * feet_w * feet_h << " футов";

    return 0;
}