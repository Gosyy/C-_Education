#include <iostream>
using namespace std;

int main()
{
    int n=20; // Количество строк

    for (int i = 1; i <= n; i++) // Количество строк пирамиды
    {
        for (int j = 1; j <= (2*n-1); j++) // Количество столбцов пирамиды
        {
            if (n-i < j and j < n+i)
            {
                cout << "x";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}