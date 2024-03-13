#include <iostream>
using namespace std;

struct coordinats
{
    short int x;
    short int y;
};

struct point
{
    coordinats p1;
    coordinats p2;
    coordinats p3;
};

int main()
{
    point a1;
    cout << "\n Координаты первой точки (через пробел): "; cin >> a1.p1.x; cin >> a1.p1.y;
    cout << "\n Координаты второй точки (через пробел): "; cin >> a1.p2.x; cin >> a1.p2.y;

    a1.p3.x = a1.p1.x + a1.p2.x;
    a1.p3.y = a1.p1.y + a1.p2.y;

    cout << "\n\n Координаты точки p1+p2: " << a1.p3.x << ", " << a1.p3.y << endl;

    return 0;
}