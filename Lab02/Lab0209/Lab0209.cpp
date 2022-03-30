#include <iostream>
#include <math.h>

int main()
{
	long long int a, b, n, a1 = 1, b1 = 1, tmp, f = 1;
	double Summ = 0;
	a = a1;
	b = b1;

	std::cin >> n;

	for (int k = 1; k <= n; k++) 
	{
		f = f * k;
		Summ = Summ + pow(2, k) / ((1 + pow(a, 2) + pow(b, 2)) * f);
		tmp = 3 * b + 2 * a;
		b = 2 * a * b;
		a = tmp;
	}

	std::cout << Summ << "\n";
}