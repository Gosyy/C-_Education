#include <iostream>
#include <stdio.h>
using namespace std;

long hms_to_sec(int& hours, int& minutes, int& secods) // Встаиваемая ф-я
{
    return hours*3600 + minutes*60 + secods;
}
int main ()
{
    int hour, minute, second;
    do
    {
        cout << "\n\n\n Введите часы, минуты, секунды: " << endl;
        date_repeat_1:
        cin >> hour >> minute >> second;

        if (hour>=24 | minute>=60 | second>=60 | hour<0 | minute<0 | second<0) 
        {
            cout << "\n Время заданно некорректно. Повторите ввод: ";
            goto date_repeat_1;
        }
        
        cout << "\n В секундах это: " << hms_to_sec(hour, minute, second) << endl;        
    } while (hour != 0 && minute != 0 && second != 0);
    return 0;
}
