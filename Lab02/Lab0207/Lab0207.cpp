#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, answer=1;
    int a;
    cout << "input i= ";
    cin >> i; //вводимо к-сть натуральних чисел, суму яих треба буде обчислити
    for (int j = 0; j < i; j++) {

        cout << "Enter a" << j + 1 << "= ";
        cin >> a; //вводимо дійсні числа, їх кількість має = i

        answer = answer * a;

    }
    cout << answer; //виведення суми чисел


    return 0;
}