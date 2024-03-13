#include <iostream>
using namespace std;
int main()
{
    float gal, kub_fut;
    cout << "Введите кол-во галлонов: ";
    cin >> gal;
    gal /= 7.481;

    cout << endl << "Это равняется "<< gal <<" футов" << endl;

    return 0;
}