#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Рисуем первую строку (полностью заполненная)
    for (int j = 0; j < n; j++) {
        cout << "* ";
    }
    cout << endl;
    
    for (int i = 0; i < n-2; i++) {
        cout << "* ";
        for (int j = 0; j < n-2; j++) {
            cout << "  ";
        }
        cout << "* " << endl;
    }
    
    // Рисуем последнюю строку (полностью заполненная)
    for (int j = 0; j < n; j++) {
        cout << "* ";
    }
    cout << endl;
    
    return 0;
}