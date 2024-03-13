#include <iostream>
using namespace std;

struct Distance
{
    int a;
    int b;
};

int max_num (Distance);

int main()
{
    Distance many;
    cout << "\n Введите два значения: " << endl;
    cin >> many.a >> many.b;
    cout << "\n Наибольшее: " << max_num(many) << endl;
    return 0;
}

int max_num (Distance structure)
{
    if (structure.a < structure.b) return structure.b;
    else return structure.a;
}
