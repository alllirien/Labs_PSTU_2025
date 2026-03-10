#include <iostream>
using namespace std;

void Hanoi (int n, int m, int k, int t) {
    if (n==0){cout<<"Переместить 1 диск с "<< m <<" на "<< k << endl;} 
    else { 
        Hanoi (n-1, m , k , t);
        cout<< "Переместить" << n <<" диск с "<< m <<" на "<< k << endl;
        Hanoi (n-1, t, k , m);
    }
}

int main() {
    int n;
    cin >> n;
    if (n <= 0) {
        cout<< "Ошибка!" << endl;
        return 1;
    }
    Hanoi (n,'A','B','C');
    return 0;
}