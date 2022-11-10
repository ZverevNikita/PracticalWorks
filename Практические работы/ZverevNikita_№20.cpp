#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int array[10][5];
    cout << "Исходный массив, заполненный рандомными числами: " << endl;
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = (rand() % 79) + 7;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    cout << endl;
    swap (array[0], array[2]);
    
    cout << "Исходный массив, заполненный рандомными числами, где первая строка поменята местами с третьей: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    
    cout << endl;
    swap (array[1], array[3]);
    
    cout << "Исходный массив, заполненный рандомными числами, где вторая строка поменята местами с четвёртой: " << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
}
