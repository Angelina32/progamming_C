#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	double A, b;
	int x;
	cout << "Введіть x ";
	cin >> x;
	b = (pow(x, 3)) - (sqrt(x - 1));
	A = sqrt(b);
	if (b < 0) {
		cout << "розв'язку немає";
	}
	else {
		cout << "A=" << A;
	}
}