#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main()
{
    etype chosen;
    char letter;
    cout << "\n\n Введите первую букву должности laborer, secretary, manager, accountant, executive, researcher. ";
    cin >> letter;

    switch (letter)
    {
        case 'l':  chosen = laborer; break;
        case 's':  chosen = secretary; break;
        case 'm':  chosen = manager; break;
        case 'a':  chosen = accountant; break;
        case 'e':  chosen = executive; break;
        case 'r':  chosen = researcher; break;
    }

    switch (chosen)
    {
        case 0:  cout << "\n\n Должность: laborer" << endl; break;
        case 1:  cout << "\n\n Должность: secretary" << endl; break;
        case 2:  cout << "\n\n Должность: manager" << endl; break;
        case 3:  cout << "\n\n Должность: accountant" << endl; break;
        case 4:  cout << "\n\n Должность: executive" << endl; break;
        case 5:  cout << "\n\n Должность: researcher" << endl; break;
    }
    
    return 0;
}