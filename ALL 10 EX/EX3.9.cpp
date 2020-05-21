#include <iostream>
using namespace std;

int main()
{
    long long quad_sum = 0;
    long long sum = 0;

    int N = 100;
    sum = N * (N + 1) / 2;
    quad_sum = N * (N + 1) * (2 * N + 1) / 6;
    cout << quad_sum << "-" << sum << "=" << quad_sum - sum << endl;
}

