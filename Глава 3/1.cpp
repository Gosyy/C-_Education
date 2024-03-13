#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b=1;
    cout << endl << "Введите число: ";
    cin >> a; 


    for (int i=0; i<20; i++)
    {
        for (int j=0; j<10; j++)
        {
            cout << a*b++ << "\t";            
        }
        
        cout << "\n\n";
    }

    return 0;
}