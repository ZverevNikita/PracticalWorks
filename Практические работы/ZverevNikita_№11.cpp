#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
 
    int a;
 
    cout << "Введите высоту равнобедренного треугольника: ";
    cin >> a;
 
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < a - i; j++)
        {
            cout << ' ';
        }   
        for (int j = a - 2 * i; j <= a; j++)
        {
            cout << '*';
        }           
        cout << endl;
    }
}
