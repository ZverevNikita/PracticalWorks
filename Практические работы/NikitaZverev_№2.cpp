#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x;
    
    cout << "Введите первое число: " << endl;
    cin >> a;
    
    cout << "Введите второе число: " << endl;
    cin >> b;
    
    cout << "Введите третье число: " << endl;
    cin >> c;
    
    x = (a * a + 4 * (b * c + 2 * a));
    
    cout << "Результат выражения равен: " << x << endl;
}