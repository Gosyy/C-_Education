#include <iostream>
using namespace std;

struct tim
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    tim t1;
    cout << " \n Введите время в формате часы/минуты/секунды \n" << endl;
    char ch;
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;

    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    cout << " \n В секундах это: " << totalsecs << endl;

    return 0;
}