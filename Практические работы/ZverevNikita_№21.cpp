#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int array[10][5];
    int column;
    cout << "Исходный массив, заполненный рандомными числами: " << endl;
    
    cout << endl;
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
    
    cout << "Исходный массив, заполненный рандомными числами, где первый столбец поменят местами с третьим столбцом: " << endl;
    
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            column = array[i][0];
            array[i][0] = array[i][2];
            array[i][2] = column;
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
    
    cout << "Исходный массив, заполненный рандомными числами, где второй столбец поменят местами с четвёртым столбцом: " << endl;
    
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            column = array[i][1];
            array[i][1] = array[i][3];
            array[i][3] = column;
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
}

