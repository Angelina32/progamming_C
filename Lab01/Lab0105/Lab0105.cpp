#include<cmath>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float a, b, alf, z1, z2;
	cout << "Ввести альфа";
	cin >> alf;
	a = sin(3.14 / 2 + 3 * alf);
	b = 1 - sin(3 * alf - 3.14);
	z1 = a / b;
	z2 = tan((5 / 4 * 3.14) + (3 / 2 * alf));
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2;
}