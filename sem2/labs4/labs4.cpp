//10 вариант
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    
    const int MAX_SIZE = 100; // Максимальный размер массива
    int arr[MAX_SIZE];
    int n = 10; // Начальное количество элементов
    
    // 1) Формируем массив случайных чисел
    cout << "Генерация массива:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 20 + 1; // случайные числа от 1 до 20
    }
    
    // 2) Распечатываем полученный массив
    cout <<"Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 3) Удаляем все элементы, совпадающие с минимальным
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    
    // Сдвигаем элементы, удаляя минимальные
    int new_n = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != min_val) {
            arr[new_n] = arr[i];
            new_n++;
        }
    }
    n = new_n;
    
    // 4) Добавляем в начало 3 элемента со значением среднего арифметического
    if (n > 0) {
        // Вычисляем среднее арифметическое
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int avg = (int)(sum / n);
        
        // Сдвигаем существующие элементы на 3 позиции вправо
        for (int i = n - 1; i >= 0; i--) {
            arr[i + 3] = arr[i];
        }
        
        // Добавляем 3 элемента со средним значением в начало
        arr[0] = avg;
        arr[1] = avg;
        arr[2] = avg;
        n += 3;
    }
    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}