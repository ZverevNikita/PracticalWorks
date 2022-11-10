#include <iostream>

using namespace std;

void MathOperations(int* a, int* b)
{

cout << endl;
 for (int i = 0; i < 10; i++) 
    {
      cout << "Сложение двух массивов: " << a[i] + b[i] << endl;
    }
cout << "--------------------------" << endl;

for (int i = 0; i < 10; i++) 
    {
      cout << "Вычитание двух массивов: " << a[i] - b[i] << endl;
    }
cout << "--------------------------" << endl;

for (int i = 0; i < 10; i++) 
    {
      cout << "Умножение двух массивов: " << a[i] * b[i] << endl;
    }
cout << "--------------------------" << endl;

for (int i = 0; i < 10; i++) 
    {
      cout << "Деление двух массивов: " << a[i] / b[i] << endl;
    }
}

int main()
{
    int a[10], b[10];
    cout << "Заполните первый массив: ";
    for (int i = 0; i < 10; i++)
    {
        cout << "Первый массив: " << endl;
        cout << "["<< i+1 <<"]" << ":";
        cin >> a[i];
    }
    
    cout << "Заполните второй массив: ";
    for (int i = 0; i < 10; i++) 
    {
        cout << "Второй массив: " << endl;
        cout << "["<< i+1 <<"]" << ":";
        cin >> b[i];
    }
    MathOperations(a, b);
}
    

