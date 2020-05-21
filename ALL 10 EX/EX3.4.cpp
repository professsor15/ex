#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num = 0, t = 0, d = 1;
    cout << "Введите число, для перевода в двоичную СС: " << endl;
    cin >> num;

    while (num)
    {
        t += (num % 2) * d;
        num = num / 2;
        d = d * 10; // разряд
    }
    cout << t << endl;
    return 0;
}