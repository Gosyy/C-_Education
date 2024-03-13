#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a =10;
    cout << a << endl
         << (a*=2) << endl
         << --a << endl;
         
    return 0;
}