#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, x1, x2;
    cout <<"Ввведите переменные a, b, c"<< endl;
    cin >> a >> b >> c;
    if (a == 0) {//линейное уравнение вида bx+c=0
        if (b != 0) {
            cout << -c / b;
        }
        else {
            //не имеет решений
        }
    }
    else {//квадратное уравнение
        d = (b * b - 4 * a * c);//дискриминант
        if (d < 0) {
            //нет корней
        }
        else {
            if (d == 0) {//d=0 один корень
                x1 = x2 = -b / (2 * a);
                cout << x1;
            }
            else {//d>0  два корня
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                cout << x1 << " "<< x2;
            }
        }
    }
}