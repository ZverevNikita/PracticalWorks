#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout << "Введите первое число: " << endl;
    cin >> a;
    
    cout << "Введите второе число: " << endl;
    cin >> b;
    
    cout << "Сумма чисел: " << a + b << endl;
    cout << "Умножение чисел: " << a * b << endl;
    cout << "Среднее арифметическое чисел: " << float(a + b) / 2 << endl;
}

