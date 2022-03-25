#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
   float x, y;
    cout << "Введіть x";
    cin >> x;
    cout << "Введіть y";
    cin >> y;


    if ((abs(x) > 1) && (abs(y) > 1) && ((x * x + y * y) < 2))
    {
        cout << "Точка належить області";
    }
    else {
        cout << "Точка не належить області";
    }
}