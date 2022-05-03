#include <iostream>
#include <cstring>

using namespace std;
int main() 
{
    setlocale(LC_CTYPE, "ukr");
    char str[100]; //заданий текст
    int i;
    int pos, pos2; // потрібне значення - позиція

    cin >> str;
    pos2 = -1;

    for (i = strlen(str) - 1; i >= 0; i--) // перегляд рядка від кінця до початку
        if (str[i] == ',')
        {
            pos2 = i + 1; // запам'ятати позицію
            break; // вихід із циклу, подальше виконання циклу не має сенсу
        }

    if (pos2 == -1)
        cout << "Символу немає";
    else
        cout << "2)остання кома " << pos2 << endl;


    pos = -1;

    for (i = 0; i < strlen(str); i++)
        if (str[i] == ',')
        {
            pos = i + 1; // запам'ятатипозицію
            break; // вихід із циклу, подальше виконання циклу не має сенсу
        }

    if (pos == -1)
        cout << "Символу немає";
    else
        cout << "1)Перша кома " << pos << endl;


}