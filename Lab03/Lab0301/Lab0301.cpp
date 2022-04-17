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

// Задача 1-4) Ввести значення 2 - х дійсних змінних а і b.Направити два покажчика на ці змінні.Якщо а > b, то за допомогою покажчика збільшити значення змінної а на 3 і b зменшити в 3 рази, в іншому випадку а зменшити в 2 рази і b збільшити на 3.
