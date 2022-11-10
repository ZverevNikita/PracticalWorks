#include <iostream>
#include <locale.h>

using namespace std;

void MaximumArrayElement(int max)
{
    cout << "Максимальный элемент массива: " << max << endl;
    cout << endl;
}

void MinimumArrayElement(int min)
{
    cout << "Минимальный элемент массива: " << min << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int array[7][7];
    
    cout << "Массив, заполненный рандомными числами от 20 до 80: " << endl;
    cout << endl;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            array[i][j] = (rand() % 61) + 20;
        }
    }
    
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            string space = array[i][j] >= 10 ? " " : "  ";
            cout << array[i][j] << space;
        }
        cout << endl;
    }
    
    cout << endl;
    
    int max, min;
    max = array[0][0];
    min = array[0][0];
    
    for(int i = 0; i < 7; i++)
	{
	    for (int j = 0; j < 7; j++)
        {   
            if (array[i][j] > max) max = array[i][j];
            if (array[i][j] < min) min = array[i][j];
        }
	}
    
    MaximumArrayElement(max),
    MinimumArrayElement(min);
}
