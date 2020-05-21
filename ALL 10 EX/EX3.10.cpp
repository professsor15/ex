#include<iostream>
#include<vector>

using namespace std;

void vectorMultiply(vector<int>& v, int x) {
    int carry = 0;
    int size = v.size();

    for (int i = 0; i < size; i++) {
        int res = carry + v[i] * x;
        v[i] = res % 10;
        carry = res / 10;
    }

    while (carry != 0) {
        v.push_back(carry % 10);
        carry /= 10;
    }
}

int digitSumOfFact(int n) {
    vector<int> v;
    v.push_back(1);

    for (int i = 1; i <= n; i++)
        vectorMultiply(v, i);
    int sum = 0;
    int size = v.size();

    for (int i = 0; i < size; i++)
        sum += v[i];
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 100;
    cout << "Сумма чисел факториала " << n << "! это: " << digitSumOfFact(n)<< endl;
}