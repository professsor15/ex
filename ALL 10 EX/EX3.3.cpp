#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout <<"Введите числа, для нахождения НОД: "<<endl;
    cin >> a >> b;

    while (a > 0 && b > 0) {
        if (a > b) {
            a %= b;
        }
        else {
            b %= a;
        }
    }
    cout << a + b;
    return 0;

}