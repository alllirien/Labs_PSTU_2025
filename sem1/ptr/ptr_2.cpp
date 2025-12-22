#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    cout << "До обмена: a = " << a << ", b = " << b << endl;
    int* ptrA = &a;
    int* ptrB = &b;
    int temp = *ptrA;// сохраняем значение a
    *ptrA = *ptrB;// копируем b в a
    *ptrB = temp;// копируем сохраненное значение в b
    
    cout << "После обмена: a = " << a << ", b = " << b << endl;
    
    return 0;
}