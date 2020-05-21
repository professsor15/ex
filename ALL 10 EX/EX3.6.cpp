#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string p)
{
	string temp;
	for (int i = p.size() - 1; i >= 0; --i)
	{
		temp += p[i];
	}

	if (p == temp) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	string p;
	cout << "Введите слово: " << endl;
	cin >> p;
	cout << IsPalindrom(p) << endl;
	getchar();
	return 0;
}