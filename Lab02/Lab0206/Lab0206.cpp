#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float S;
	int n;
	cout << "Введіть n: ";
	cin >> n;
	
	if (n==0) {
		S = 1;
	}
	else if (n==1) {
		S = 2;
	}
	else {
		S = pow(2,n);
	}
	cout << "S=" << S;
}