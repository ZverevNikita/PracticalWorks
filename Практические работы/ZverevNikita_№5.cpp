#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, s;

    s = 0;

    cout << "Введите начало промежутка: ";
    cin >> a;

    cout << "Введите конец промежутка: ";
    cin >> b;

    if (a > 0 && b > 0){
        for (int i = a; i <= b; i++)
        s = s + i;
    cout << "Сумма всех чисел из интервала: " << s;
    }
    else{
        cout << "Ошибка! Концы промежутков не могут быть отрицательными!";
    }
}