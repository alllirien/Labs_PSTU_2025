#include <iostream>
using namespace std;
int main(){
    int n, tmp;
bool plusFirst = false; // flag 1
bool minusFirst = false; // flag 2
cout << "Введите длину последовательности:" << endl;
cin >> n;
for (int i = 1; i <= n; i++)
{
 cin >> tmp;
 if (!plusFirst && !minusFirst)
 {
 if (tmp > 0) { plusFirst = true; }
 else if (tmp < 0) { minusFirst = true; }
 }
}
if (plusFirst) { cout << "Сначала введи положительное число"; }
else if (minusFirst) { cout << "Сначала введи отрицательное число"; }
else { cout << "Все элементы были нулевыми"; }
cout << endl;
}