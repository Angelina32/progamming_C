#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n, answer = 0;
    float x, j;
    cout << "input n= ";
    cin >> n;//вводимо к-сть натуральних чисел, суму яих треба буде обчислити
    cout << "input x= ";
    cin >> x;//вводимо x
    for (float a = 0; a <= n; a++) {
        j = sin(a);
        cout << j << "\n";
        if (x == j)
        {
            answer = answer + 1;
        }
    }
    cout << "Х зустрiчається " << answer << " раз";
    return 0;
}