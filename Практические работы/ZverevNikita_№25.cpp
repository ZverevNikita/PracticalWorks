#include <iostream>
#include <locale.h>

using namespace std;

void print2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "|\t" << arr[i][j] << "\t";
        }
        cout << "|\n";
    }
    cout << "|\n";
}

void swapRowsIn2DArray(int** arr, int row1, int row2) {
    int* temp = arr[row1];
    arr[row1] = arr[row2];
    arr[row2] = temp;
    // delete(&temp);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    
    int m, n, a, b;
    cout << "Введите количество строк в массиве: " << endl;
    cin >> m;
    cout << "Введите количество столбцов в массиве: " << endl;
    cin >> n;
    int **array = new int*[m];
    cout << "Исходный массив, заполненный рандомными числами: " << endl;
    
    cout << endl;
    for (int i = 0; i < m; i++) 
    {
        array[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            array[i][j] = (rand() % 79) + 7;
        }
    }
    
    print2DArray(array, m, n);
    
    cout << "Какие строки нужно поменять местами в массиве: " << endl;
    cin >> a >> b;
    
    cout << endl;
    
    swapRowsIn2DArray(array, a-1, b-1);
    
    print2DArray(array, m, n);
}
