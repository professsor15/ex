#include <iostream>
#include <string>

using namespace std;

int main()
{
	string answer = "";
	int count, i = 0;
	cout << "Enter a number: " << endl;
	cin >> count;
	while (count > 0)
	{
		string b = to_string(count % 2);
		answer.insert(i, b);
		i++;
		count /= 2;
	}
	cout << answer << endl;
}
