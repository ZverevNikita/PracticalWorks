#include <iostream>

using namespace std;

int main()
{
    int a, b, r;
    
    cout << "Введите начало промежутка: ";
    cin >> a;
    
    cout << "Введите конец промежутка: ";
    cin >> b;
    
    r = a + rand()%(b-a+1);
    
    cout << "Рандомное число из этого промежутка: " << r << endl;
}

