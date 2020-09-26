#include <iostream>

using namespace std;

int main() {
	char arr[100]; //string s

	cin >> arr;

	for (int i = 0; arr[i] != NULL; i++) {  //i<s.size();
		if (i % 10 == 0 && i != 0)   //cout<<s[i]
			cout << endl;
		cout << arr[i];
	}

	return 0;
}