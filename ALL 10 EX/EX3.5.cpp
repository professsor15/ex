#include <iostream>
using namespace std;

int factorial(int f)
{
	int F = 1;

	for (int i = 1; i <= f; ++i) {
		F *= i;
	}
	return F;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите число: " << endl;
	cin >> N;

	if (N >= 0) {
		cout << factorial(N) << endl;
	}
	else {
		cout << "1" << endl;
	}
	return 0;
};