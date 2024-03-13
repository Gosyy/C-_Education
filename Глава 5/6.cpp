#include <iostream>
using namespace std;

struct tim
{
    int hours;
    int minutes;
    int seconds;
};

tim t1, t2, sum_time;

inline long time_to_sec (tim& time_1, tim& time_2)
{
    return time_1.hours*3600 + time_1.minutes*60 + time_1.seconds + time_2.hours*3600 + time_2.minutes*60 + time_2.seconds;   
};

tim sec_to_time (long&);

int main()
{
    date_repeat_1:
    cout << " \n Введите первую временную единицу в формате часы/минуты/секунды: " << endl;
    char ch = '/';
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
    if (t1.hours>=24 | t1.minutes>=60 | t1.seconds>=60 | t1.hours<0 | t1.minutes<0 | t1.seconds<0) 
    {
        cout << "\n Ошибка! Повторите ввод.";
        goto date_repeat_1;
    }

    date_repeat_2:
    cout << " \n Введите вторую временную единицу в формате часы/минуты/секунды: " << endl;
    cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
    if (t2.hours>=24 | t2.minutes>=60 | t2.seconds>=60 | t2.hours<0 | t2.minutes<0 | t2.seconds<0)
    {
        cout << "\n Ошибка! Повторите ввод.";
        goto date_repeat_2;
    }

    long sum_sec = time_to_sec(t1, t2);
    sec_to_time (sum_sec);

    cout << " \n\n Сумма временных единиц: " << sum_time.hours << ch << sum_time.minutes << ch << sum_time.seconds << endl;

    return 0;
}

tim sec_to_time (long& sum_seconds)
{
    sum_time.hours = sum_seconds / 3600;
    sum_time.minutes = sum_seconds % 3600 / 60;
    sum_time.seconds = sum_seconds % 3600 % 60;
}




    