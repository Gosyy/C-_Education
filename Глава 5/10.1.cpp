#include <iostream>
using namespace std;

int score = 0;

inline void foo(int& check)
{
    cout << "\n Функция вызвана " << ++check << " раз/раза." << endl;
}

int main()
{
    cout << "\n\n Введите количество мракобесии: " << endl;
    int n; cin >> n;
    for (int i=0; i<n; i++) foo(score);
    return 0;
}