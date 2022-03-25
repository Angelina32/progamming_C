#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int vidminok;
	cout << "Введіть відмінок ";
	cin >> vidminok;
	switch (vidminok) {
	case 'н':
		cout << "хто ? , що ?";
		break;
	case 'р':
		cout << "кого?, чого? ";
		break;
	case 'д':
		cout << "кому ? , чому ?";
		break;
	case 'з':
		cout << "кого ? , що ?";
		break;
	case 'о':
		cout << "ким ? , чим ? ";
		break;
	case 'м':
		cout << "на кому ? , на чому ?";
		break;
	case 'к':
		cout << "іменники виступають звертаннями";
		break;
	}
}
