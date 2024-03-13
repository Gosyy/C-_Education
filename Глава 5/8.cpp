#include <iostream>
using namespace std;

inline void swap (int& one, int& two)
{
    int k = one;
    one = two;
    two = k;
}

int main()
{
    int a, b;
    cout << "\n\n Введите два числа в необходимом порядке: " << endl;
    cin >> a >> b;
    swap (a, b);
    cout << "\n\n Обратный порядок: " << a << ", " << b << endl;
return 0;
}