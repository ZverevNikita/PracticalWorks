#include <iostream> 

using namespace std; 

int main() 
{ 
    int a;
    
    cout << "Введите высоту треугольника: "; 
    cin >> a; 
    for (int r = 1; r <= a; ++r) { 
        for (int c = 1; c <= r; ++c) cout << '@'; 
        cout << '\n'; 
    } 
    return 0; 
} 


