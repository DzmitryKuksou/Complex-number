#include <iostream>
#include"Complex.h"
using namespace std;
int main()
{
	double a = -1, b = 1;
	Complex c1(a, b), c2(2, 3), c3 = c1 / c2;
    cout<<c1.Mod();
	c1.DisplayComplex();
	c2.DisplayComplex();
	c3.DisplayComplex();
	

	system("pause");
	return 0;
}