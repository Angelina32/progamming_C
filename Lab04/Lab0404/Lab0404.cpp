#include <iostream>
using namespace std;


const int N = 3, M = 3;

void fillMatrix(int array[N][M]);
void printMatrix(int array[N][M]);
void diag(int array[N][M]);
int main() {
    int mas[N][M];

    fillMatrix(mas);
    printMatrix(mas);
    diag(mas);
    system("pause");
    return 0;
}

void fillMatrix(int array[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            array[i][j] = rand() % 10;
        }
    }
}
void printMatrix(int array[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void diag(int array[N][M]) {

    int k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i + j == N - 1) % 2 == 0)array[i][j] = 1;
            if (array[i][j] % 2 == 0) {
                k++;
            }
        }

    }
    cout << "Kilkist parnih elementiv=" << k << endl;
}