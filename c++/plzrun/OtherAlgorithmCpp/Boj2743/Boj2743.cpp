#include <iostream>

using namespace std;

int main() {
	string str;

	cin >> str;

	int number = 0;
	for (int i = 0; i < str.size(); i++)
		if ((str[i] <= 'Z' && str[i] >= 'A') || (str[i] <= 'z' && str[i] >= 'a'))
			number++;

	cout << number;

	return 0;
}