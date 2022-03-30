#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr"); 
    int a, b;
    cout << "Ввести a ";
    cin >> a;
    cout << "Ввести b ";
    cin >> b;
    int* aPtr = &a, * bPtr = &b;
    if (a > b) {
        a = *aPtr + 3;
        cout << "a=" << a;
        b = *bPtr / 3;
        cout << "b=" << b;
    }
    else {
        a = *aPtr / 2;
        cout << "a=" << a;
        b = *bPtr + 3;
        cout << "b=" << b;
    }

    return 0;

}