#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 30;
    int i = 0;
    int array[n], m;
    while (i < n)
    {
        m = rand() % 99 + 1;
        if (m % 2 != 0)
        {
            array[i] = m;
            cout << "[" << i << "]: " << array[i] << endl;
            i++;
        }
    }
}