#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct date 
{
    short int day;
    short int mounth;
    short int year;
};

struct employee
{
    int number;
    float allowance;
    etype position;
    date d;
};

int main()
{
    employee person, worker_1, worker_2, worker_3;

    for (short int i=0; i<3; i++)
    {
        cout << "\n Введите: \n 1. Номер сотрудника. \n 2. Зарплата.\n 3. Первую букву должности laborer, secretary, manager, accountant, executive, researcher. \n 4. Дата  принятия на работу в формате день/месяц/год.  \n" << endl;

        cin >> person.number >> person.allowance;

        char letter;
        cin >> letter;

        switch (letter)
        {
            case 'l':  person.position = laborer; break;
            case 's':  person.position = secretary; break;
            case 'm':  person.position = manager; break;
            case 'a':  person.position = accountant; break;
            case 'e':  person.position = executive; break;
            case 'r':  person.position = researcher; break;
        }

        char ch ='/';
        cin >> person.d.day >> ch >> person.d.mounth >> ch >> person.d.year;

        cout << "\n Введено: \n 1. Номер сотрудника. " << person.number << "\n 2. Зарплата. " << person.allowance << endl; 

        switch (person.position)
        {
            case 0:  cout << "\n 3. Должность: laborer" << endl; break;
            case 1:  cout << "\n 3. Должность: secretary" << endl; break;
            case 2:  cout << "\n 3. Должность: manager" << endl; break;
            case 3:  cout << "\n 3. Должность: accountant" << endl; break;
            case 4:  cout << "\n 3. Должность: executive" << endl; break;
            case 5:  cout << "\n 3. Должность: researcher" << endl; break;
        }

        cout << "\n 4. Дата  принятия на работу в формате день/месяц/год. " << person.d.day << ch << person.d.mounth << ch << person.d.year << endl;

        switch (i)
        {
            case 0: worker_1 = person; break;
            case 1: worker_2 = person; break;
            case 2: worker_3 = person; break;
        }
    }

    return 0;
}