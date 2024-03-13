#include <iostream>
using namespace std;

inline void foo()
{
    static int score = 0;
    cout << "\n Функция вызвана " << ++score << " раз/раза." << endl;
}

int main()
{
    cout << "\n\n Введите количество мракобесии: " << endl;
    int n; cin >> n;
    for (int i=0; i<n; i++) foo();
    return 0;
}