// задание 15
#include <iostream>
#include <cmath>
using namespace std;
// f(x) = 3x - 4*lnx - 5 = 0
// [2;4]
int main(){
    double a, b, c;
    double fA, fB, fC;
    double eps = 0.000001;

    a = 2;
    b = 4;

    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = (3 * a - (4 * log(a)) - 5 );
        fB = (3 * b - (4 * log(b)) - 5 );
        fC = (3 * c - (4 * log(c)) - 5 );
        
        if (fA * fC < 0) {b = c;}
        else if (fC * fB < 0) { a = c;}

        
    }
    cout << "Корни: " << a << "; " << b << endl;
    return 0;
}