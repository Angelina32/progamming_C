#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    new int;
    int *ptr = new int;
    cin >> *ptr;

    new int;
    int *otherptr = new int;
    cin >> *otherptr;

    *ptr = *ptr / 2;
    cout << "*ptr= " << *ptr;
}


    //Задача 3-1. Описати 2 покажчика на цілий тип.Виділити для них динамічну пам'ять. Ввести значення в виділену пам'ять з клавіатури.Зменшити в 2 рази 1 - у зміну.
