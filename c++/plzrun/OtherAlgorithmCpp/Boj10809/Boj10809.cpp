#include <iostream>

using namespace std;

int arr[26];

int main() {
	string str;
	
	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	cin >> str;


	for (int i = 0; i < str.size(); i++)
		if (arr[str[i] - 'a'] == -1)
			arr[str[i] - 'a'] = i;

	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
	cout << '\n';


	return 0;
}