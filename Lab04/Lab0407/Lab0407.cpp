#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const int i = 5, j = 5;
    int A[j][i] =
    {
        { 1, 2, 3, 4, 5 },
        { 5, 1, 2, 3, 4 },
        { 4, 5, 1, 2, 3 },
        { 3, 4, 5, 1, 2 },
        { 2, 3, 4, 5, 1 }
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";

        }
        cout << endl;
    }
}