#include <iostream>
#include <locale>

using namespace std;

int main() {
    locale::global(locale(""));
    long int F1 = 1, F2 = 2, F = 0;
    long long S = 2;
    do {
        F = F1 + F2;
        if (F % 2 == 0) S += F;
        F1 = F2;
        F2 = F;
    } while (F <= 4000000);

    cout << "Сумма =  " << S << endl;

    system("pause");
    return 0;
}