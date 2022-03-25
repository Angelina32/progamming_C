#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int X, Y, Z;
    cout << "Введіть X ";
    cin >> X;
    cout << "Введіть Y ";
    cin >> Y;
    cout << "Введіть Z ";
    cin >> Z;
    if (X > Y)
    {
        swap(X, Y);//міняємо значення місцями
    }
    if (Z < Y)
    {
        swap(Y, Z);//міняємо значення місцями
    }
    if (X > Z)
    {
        swap(X, Z);//міняємо значення місцями
    }
    if (X > Y)
    {
        swap(X, Y);//міняємо значення місцями
    }
    cout << "X=" << X << endl;
    cout << "Y=" << Y << endl;
    cout << "Z=" << Z ;
}