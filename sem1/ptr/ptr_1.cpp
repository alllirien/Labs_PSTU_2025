#include <iostream>
using namespace std;

int main() {

    int x = 5;
    cout << "Исходное значение: x = " << x << endl;
    int* ptr;  
    // Сохраняем в указатель адрес переменной x
    ptr = &x;
    cout << "Адрес переменной x: " << ptr << endl; 
    // Изменяем значение x через указатель
    *ptr = 15;
    cout << "После *ptr = 15: x = " << x << endl;
    *ptr = *ptr + 5;  // x = x + 5
    cout << "После *ptr = *ptr + 5: x = " << x << endl;
    
    return 0;
}