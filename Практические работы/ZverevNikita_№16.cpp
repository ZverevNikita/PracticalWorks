#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int array[10][10];
    int array2[10][10];
    
    cout << "Исходный массив: " << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = (rand() % 100) + 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    
    cout << endl;
    cout << "Исходный массив только с чётными элементами: " << endl;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            if (array[i][j] % 2 == 0)
            {
                cout << array[i][j] << space;
                array2[i][j] = array[i][j];
            }
            else
            {
                cout << 0 << space;
                array2[i][j] = 0;
            }
        }
        cout << endl;
    }
    
    cout << endl;
    cout << "Новый массив только с чётными элементами: " << endl;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            string space = array2[i][j] >= 10 ? " " : "  ";
            cout << array2[i][j] << space;
        }
        cout << endl;
    }
}