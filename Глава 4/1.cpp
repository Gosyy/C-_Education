#include <iostream>
using namespace std;

struct phone
{
    short int code;
    short int station;
    short int number;
};

int main()
{
    phone number1;
    cout << endl << "\n Введите код города, номер станции и номер абонента через пробел\n";
    cin >> number1.code; cin >> number1.station; cin >> number1.number;
    cout << "\n\n\n Номер: (" << number1.code << ") " << number1.station << "–" << number1.number << endl;

    return 0;
}