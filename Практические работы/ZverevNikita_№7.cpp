#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, z;

    cout << "Введите основание числа: ";
    cin >> x;

    cout << "Введите степень числа: ";
    cin >> y;

    z = pow(x, y);
    cout << "Подсчёт результата: " << z;
}