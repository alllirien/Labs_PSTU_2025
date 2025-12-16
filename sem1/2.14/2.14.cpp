#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число: ";
    
    if (!(cin >> n)) {
        cout << "Ошибка ввода!" << endl;
        return 1;
    }

    // Обрабатываем отрицательные числа
    int m = (n < 0) ? -n : n; // Берем модуль числа
    
    int sum = 0;
    
    // Особый случай для 0
    if (m == 0) {
        sum = 0;
    }
    
    while (m > 0) {
        sum += m % 10;
        m /= 10;
    }
    
    cout << "Сумма цифр: " << sum << endl;
    
    return 0;
}