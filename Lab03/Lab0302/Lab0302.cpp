#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int a, h, S;
    cout << "Ввести a "; //ввести сторону
    cin >> a;
    cout << "Ввести h "; //ввести висоту
    cin >> h;
    int* aPtr = &a, * hPtr = &h;
    a = *aPtr;
    h = *hPtr;
    S = a * h;
    cout << "S= " << S;
}

//Задача 2-1 Використовуючи замість самої змінної покажчик на неї написати програму відповідно до завдання : 1) Обчислити площу трикутника по стороні і висоті.

