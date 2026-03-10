//10 вариант
#include <iostream>
using namespace std;

int main() {
    const int n = 5; 
    const int m = 4; 

    int arr[n][m] = {
        {1, 2, 3, 4},
        {-5, 6, 7, 8},    
        {9, 10, 11, 12},
        {13, 14, -15, 16},
    };

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    int k = 0; 

    for (int i = 0; i < n; i++) {
        bool neg = false; 
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
               neg = true;
                break; 
            }
        }
        if (!neg) {
            for (int j = 0; j < m; j++) {
                arr[k][j] = arr[i][j];
            }
            k++;
        }
    }

    for (int i = k; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }
    cout << "Обработанный массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}