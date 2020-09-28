#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j <= n; j++) {
		for (int i = 0; i < n - j; i++)
			cout << ' ';
		for (int i = 0; i < j; i++)
			cout << '*';
		cout<<'\n';
	}
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < j; i++)
			cout<<' ';
		for (int i = 0; i < n - j; i++)
			cout<<'*';
		cout<<'\n';
	}

	return 0;
}