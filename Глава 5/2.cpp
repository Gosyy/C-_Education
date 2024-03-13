#include <iostream>
using namespace std;

double power(double, int = 2);

int main()
{
    double n;
    int p;
    cout << "\n\n Введите число и степень, в которую необходимо его возвести: " << endl;
    cin >> n >> p;
    cout << "\n Результат:  " << power(n, p) << endl;
    return 0;
}

double power(double nn, int pp)
{
    double result = 1;
    for (int i=0; i<pp; i++) result *= nn;
    return result;
}