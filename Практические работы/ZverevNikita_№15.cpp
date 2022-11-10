#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int array[10][10];
    int sums[2][10] = { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} };

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = (rand() % 79) + 7;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;

            sums[0][j] += array[i][j];
            sums[1][i] += array[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Сумма элементов " << i + 1 << " столбца = " << sums[0][i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Сумма элементов " << i + 1 << " строки = " << sums[1][i] << endl;
    }
}