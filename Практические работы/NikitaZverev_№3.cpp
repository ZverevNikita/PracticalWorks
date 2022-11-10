#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, n1, n2;
    
    cout << "Введите первое число: " << endl;
    cin >> a;
    
    cout << "Введите второе число: " << endl;
    cin >> b;
    
    cout << "Введите третье число: " << endl;
    cin >> c;
    
    x = (a * a - 4 * b * c + 2 * a) / (b * b - 3 * c);
    n1 = a * a - 4 * b * c + 2 * a;
    n2 = b * b - 3 * c;
    
    if ((n1 > 0) && ((n2) != 0)){
        cout << "Значение выражения равно: " << x << endl;
    }
    if ((n1 < 0) && ((n2) == 0)){
        cout << "Ошибка! Знаменатель равен нулю!" << endl;
    }
    if ((n1 > 0) && ((n2) == 0)){
        cout << "Ошибка! Знаменатель равен нулю!" << endl;
    }
    if ((n1 < 0) && ((n2) != 0)){
        cout << "Ошибка! Числитель меньше нуля!" << endl;
    }
}
