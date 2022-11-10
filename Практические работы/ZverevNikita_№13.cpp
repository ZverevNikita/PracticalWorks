#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int array[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
    int a = 0;
    for (int c = 0; c < 7; c++)
    {
        if (array[c] % 2 == 0)
        {
            a += array[c];
        }
    }
    cout << "Сумма чётных чисел в массиве равна: " << a;
}