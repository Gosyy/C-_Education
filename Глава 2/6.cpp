#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float dollar, fut_ster, frank, n_marka, ien;
    cout << endl << "Введите сумму в долларах: ";
    cin >> dollar;
    cout << endl
         << setw(8) << "dollar" << setw (15) << dollar << endl
         << setw(8) << "fut_ster" << setw (15) << (1/1.487*dollar) << endl
         << setw(8) << "frank" << setw (15) << (1/0.172*dollar) << endl
         << setw(8) << "n_marka" << setw (15) << (1/0.584*dollar) << endl
         << setw(8) << "ien" << setw (15) << (1/0.00955*dollar) << endl;

    return 0;
}