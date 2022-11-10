#include <iostream>

using namespace std;

void MathOperations(int a, int b)
{
    cout << "Результат сложения двух чисел равен: " << a + b << endl;
    cout << "Результат вычитания двух чисел равен: " << a - b << endl;
    cout << "Результат умножения двух чисел равен: " << a * b << endl;
    cout << "Результат деления двух чисел равен: " << a / b << endl;
}

int main()
{
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    MathOperations(a, b);
}
