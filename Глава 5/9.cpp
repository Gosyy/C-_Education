#include <iostream>
using namespace std;

struct tim
{
    int hours;
    int minutes;
    int seconds;
};

void swap (tim&, tim&);

int main()
{
    tim t1, t2;
    int a, b;

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

    swap (t1, t2);
    cout << "\n\n Обратный порядок: " << t1.hours << ch << t1.minutes << ch << t1.seconds;
    cout << ", " << t2.hours << ch << t2.minutes << ch << t2.seconds << endl;
    return 0;
}

void swap (tim& one, tim& two)
{
    int temp = one.hours;
    one.hours = two.hours;
    two.hours = temp;

    temp = one.minutes;
    one.minutes = two.minutes;
    two.minutes = temp;

    temp = one.seconds;
    one.seconds = two.seconds;
    two.seconds = temp;
}