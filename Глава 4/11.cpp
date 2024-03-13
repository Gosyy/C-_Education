#include <iostream>
#include <stdio.h>
using namespace std;

struct tim
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    tim t1, t2, sum_time;

    date_repeat_1:
    cout << " \n Введите первую временную единицу в формате часы/минуты/секунды: " << endl;
    char ch = '/';
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
    if (t1.hours>=24 | t1.minutes>=60 | t1.seconds>=60) 
    {
        cout << "\n Ошибка! Повторите ввод.";
        goto date_repeat_1;
    }

    date_repeat_2:
    cout << " \n Введите вторую временную единицу в формате часы/минуты/секунды: " << endl;
    cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
    if (t2.hours>=24 | t2.minutes>=60 | t2.seconds>=60)
    {
        cout << "\n Ошибка! Повторите ввод.";
        goto date_repeat_2;
    }

    long totalsecs_1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    long totalsecs_2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
    totalsecs_1 += totalsecs_2;

    sum_time.hours = totalsecs_1 / 3600;
    sum_time.minutes = totalsecs_1 % 3600 / 60;
    sum_time.seconds = totalsecs_1 % 3600 % 60;

    cout << " \n\n Сумма временных единиц: " << sum_time.hours << ch << sum_time.minutes << ch << sum_time.seconds << endl;

    return 0;
}