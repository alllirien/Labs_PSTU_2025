#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, x1, x2;
    
    // Ввод коэффициентов
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;
    
    // Проверка, что уравнение квадратное (a != 0)
    if (a == 0) {
        cout << "Это не квадратное уравнение (a = 0)!" << endl;
        return 1;
    }
    
    // Вычисление дискриминанта
    d = b * b - 4 * a * c;
    
    // Проверка дискриминанта и вычисление корней
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
    }
    else if (d == 0) {
        x1 = -b / (2 * a);  // исправлено: добавлена точка с запятой
        cout << "x1 = x2 = " << x1 << endl;
    }
    else {
        cout << "Действительных корней нет!" << endl;
    }
    
    return 0;
}