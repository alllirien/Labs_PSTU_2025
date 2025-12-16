#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите натуральное число: ";
    cin >> N;
    
    // Проверка на натуральное число
    if (N < 1) {
        cout << "Ошибка! Введите число больше 0." << endl;
        return 1;
    }
    
    int reversed = 0;
    int temp = N;
    
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    
    cout << N << " -> " << reversed << endl;
    
    return 0;
}