#include <iostream>
using namespace std;

int main() {
    float x, y;
    
    cout << "Введите первое число: ";
    cin >> x;
    cout << "Введите второе число: ";
    cin >> y;
    
    float* pX = &x;
    float* pY = &y;
    
    float result = *pX + *pY;
    
    cout << *pX << " + " << *pY << " = " << result << endl;
    
    return 0;
}