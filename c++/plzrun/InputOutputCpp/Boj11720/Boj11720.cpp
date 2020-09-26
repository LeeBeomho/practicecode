#include <iostream>

using namespace std;

int main(){
	int n;
	char c;
	int result=0;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> c;
		result += c - '0';
	}

	cout << result << endl;

	return 0;
}