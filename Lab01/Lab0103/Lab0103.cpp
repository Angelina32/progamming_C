#include<cmath>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout << "Довжина сторони > Висота" << endl;
	int a;
	cout << "Довжина сторони";
	cin >> a;
	int h;
	cout << "Висота";
	cin >> h;
	float osn;
	osn = (a * a - h * h);
	float b;
	b = sqrt(osn) * 2;
	float S;
	S = (b * h) / 2;
	cout << "Площа=" << S <<endl;
	float r;
	r = (b / 2) * sqrt((a * 2 - b) / (2 * a + b));
	cout << "Радіус=" << r;
}