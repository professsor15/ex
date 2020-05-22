#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string Pal);

int main()
{
	string p;
	getline(cin, p);
	for (int i = 0; i < p.length(); i++)
	{
		if (p[i] == ' ') p.erase(i, 1);
	}
	p = (IsPalindrom(p)) ? "Palindrom" : "Not Palindrom";
	cout << p << endl;
}

bool IsPalindrom(string Pal)
{
	string p;
	for (int i = Pal.size() - 1; i >= 0; --i)
	{
		p += Pal[i];
	}
	bool val = (p == Pal) ? true : false;
	return val;
}
