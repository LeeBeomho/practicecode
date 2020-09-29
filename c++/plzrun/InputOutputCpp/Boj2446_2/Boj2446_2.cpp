#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j <= n; j++) {
		for (int i = 0; i < j - 1; i++)
			cout << ' ';
		for (int i = 0; i < 2 * (n - j) + 1; i++)
			cout << '*';
		cout<<'\n';
	}
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < n - j - 1; i++)
			cout<<' ';
		for (int i = 0; i < 2 * j + 1; i++)
			cout<<'*';
		cout<<'\n';
	}

	return 0;
}