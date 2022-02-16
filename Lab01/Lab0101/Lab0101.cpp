#include<cmath>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a;
	cout << "Введіть 1 число";
	cin >> a;
	int b;
	cout << "Введіть 1 число";
	cin >> b;
	int c;
	cout << "Введіть 1 число";
	cin >> c;
	float kor;
	kor = sqrt((a * b) + (a * c) + (b * c));
	cout << kor;
}
