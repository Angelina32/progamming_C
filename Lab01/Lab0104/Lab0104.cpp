#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float T, A, Y, S;
	cout << "Час(год)=";
	cin >> T;
	cout << "Прискорення(км/с)=";
	cin >> A;
	cout << "швидкість автомобілів(км/год)=";
	cin >> Y;
	S = 120 + 2 * Y * T + (2 * A * (T * T) / 4);
	cout << "Відстань між авто=" << S;
}