#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char a;
    cout << endl << "Введите любую букву: ";
    cin >> a;
    cout << endl << "islower(): " << islower(a);

    return 0;
}