#include <iostream>

int main()
{
	long long int i, j, Summ = 0, Total = 1;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 20; j++)
		{
			Summ = Summ + j * j;
		}
		Total = Total * (i * i + Summ);
		Summ = 0;
	}

	std::cout << Total << "\n";
}