#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int m, n;
    cout << "Введите количество строк в массиве: " << endl;
    cin >> m;
    cout << "Введите количество столбцов в массиве: " << endl;
    cin >> n;
    int **array = new int*[m];
    cout << "Исходный массив, заполненный рандомными числами: " << endl;
    for (int i = 0; i <= m; i++) 
    {
        array[i] = new int[n];
        for (int j = 0; j <= n; j++)
        {
            array[i][j] = (rand() % 79) + 7;
        }
    }
    
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            string space = array[i][j] >= 10 ? " " : " ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    cout << endl;
    swap (array[0], array[2]);
    
    cout << "Исходный массив, заполненный рандомными числами, где первая строка поменята местами с третьей строкой: " << endl;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    cout << endl;
    swap (array[1], array[3]);
    
    cout << "Исходный массив, заполненный рандомными числами, где вторая строка поменята местами с четвёртой строкой: " << endl;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    cout << endl;
}
