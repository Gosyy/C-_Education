// Найти среднее арифметическое среди всех элементов массива [2, 5, 13, 7, 6, 4].

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = { 2, 5, 13, 7, 6, 4 };
    int size = 6;
    int sum = 0;
    int avg = 0;
    int index = 0;

    while (index < size)
    {
        sum += numbers[index];
        index++;
    }

    avg = sum / size;
    cout << "\n Среднее арифметическое элементов массива [2, 5, 13, 7, 6, 4]: " << avg << endl;

    return 0;
}