#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a = 6.5;
    double b = 9.5;
    double c = 1.365;
    double z, y, o, w;
    int alpha = 4;

    w = pow(sin(a), 4);
    o = pow(cos(b), 2);
    z = 5 * pow(sin(c), alpha);

    y = ((w * o) / z) + (3.f / 22.f);

    cout << "Тригонометрическая функция равна: " << y << "\n";
}
