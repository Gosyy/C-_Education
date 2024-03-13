#include <iostream>
using namespace std;

double power(char&, int&);
double power(int&, int&);
double power(long&, int&);
double power(float&, int&);
double power(double&, int&);

int main()
{
    double n;
    int p;
    do 
    {
        cout << "\n\n Введите число и степень, в которую необходимо его возвести: " << endl;
        cin >> n >> p;
        cout << "\n Результат:  " << power(n, p) << endl;
    } while (n != 0);
    return 0;
}

double power(char& number, int& degree)
{
    double result = 1;
    double num = number;
    for (int i=0; i<degree; i++) result *= num;
    return result;
}

double power(int& number, int& degree)
{
    double result = 1;
    for (int i=0; i<degree; i++) result *= number;
    return result;
}

double power(long& number, int& degree)
{
    double result = 1;
    for (int i=0; i<degree; i++) result *= number;
    return result;
}

double power(float& number, int& degree)
{
    double result = 1;
    for (int i=0; i<degree; i++) result *= number;
    return result;
}

double power(double& number, int& degree)
{
    double result = 1;
    for (int i=0; i<degree; i++) result *= number;
    return result;
}