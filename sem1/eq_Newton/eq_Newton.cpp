
//задание 5

#include <iostream>
#include <cmath>
using namespace std;
int main()
//f(x) = 0.25*pow(x, 3)+x-1.2502
// [0, 2]
//f'(x)=0.75*pow(x, 2)+1
//f''(x)=1.5*x

{
	double x, xPrev;
	//f(b)*f''(b)>0
	x = 2;//x0=b
	xPrev = 0;
	double eps = 0.000001;
	while (abs(x - xPrev) > eps)
	{
		xPrev= x;
		//теперь формула, где конспект 
		x = xPrev - (0.25 * pow(xPrev, 3) + xPrev - 1.2502)/(0.75 * pow(xPrev, 2) + 1);

	}
	cout << "Корень: "<< x << endl;
	return 0;
}