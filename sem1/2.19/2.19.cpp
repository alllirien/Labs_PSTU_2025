#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите количество слагаемых N: ";
    cin >> N;
    
    if (N <= 0) {
        cout << "N должно быть положительным числом!" << endl;
        return 1;
    }
    
    int S = 0;
    
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            S -= i;  // Вычитаем каждое третье число
        } else {
            S += i;  // Складываем остальные
        }
    }
    
    cout << "Сумма S = " << S << endl;
    return 0;
}