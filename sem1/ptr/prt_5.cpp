#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число N: ";
    cin >> n;
    
    // Выделяем память для результата
    long long* result = new long long;
    *result = 1;  // факториал 0 = 1
    
    // Вычисляем факториал через указатель
    for (int i = 1; i <= n; i++) {
        *result = *result * i;
    }
    
    cout << n << "! = " << *result << endl;
    
    return 0;
}