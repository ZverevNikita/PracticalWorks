#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a;
    cout << "Введите размер одномерного массива: ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "array[" << i + 1 << "]" << ": ";
        cin >> array[i];
    }
    cout << "\nОдномерный массив: ";
    
    cout << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;
    
    cout << "Какой элемент в одномерной массиве нужно удалить: ";
    cin >> a;
    for (int i = 0; i < n - 1; i++)
    {
        if (i >= a - 1) 
        {
            array[i] = array[i+1];
        }
        cout << array[i] << " ";
    }
}