#include<cmath>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float yard;
	cout << "Ввести зріст у ярдах";
	cin >> yard;
	float zrist;
	zrist = (yard * 9.144) / 10000;
	cout << zrist;
}
