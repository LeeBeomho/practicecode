#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j < n; j++) {
		for (int i = 1; i <= n - j; i++)
			cout<<' ';
		if (j != 1)
			cout<<'*';
		for (int i = 1; i < 2 * (j - 1); i++)
			cout<<' ';
		cout<<'*'<<'\n';
	}
	for (int i = 1; i < 2 * n; i++)
		cout<<'*';
	cout<<'\n';

	return 0;
}