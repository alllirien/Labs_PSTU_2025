#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    
    float* numbers = new float[n];  // динамический массив
    
    cout << "Введите " << n << " чисел:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    float* minPtr = numbers;        // указатель на первый элемент
    float* maxPtr = numbers;
    
    for (int i = 1; i < n; i++) {
        float* current = numbers + i;  // указатель на текущий элемент
        
        if (*current < *minPtr) {
            minPtr = current;
        }
        if (*current > *maxPtr) {
            maxPtr = current;
        }
    }
    
    cout << "\nРезультат:" << endl;
    cout << "Минимальное: " << *minPtr << endl;
    cout << "Максимальное: " << *maxPtr << endl;
    

    return 0;
}
