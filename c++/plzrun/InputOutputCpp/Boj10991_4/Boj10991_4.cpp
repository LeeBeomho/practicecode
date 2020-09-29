#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n - j; i++)
			cout << ' ';
		for (int i = 1; i < j * 2; i++)
			if (i % 2 == 1)
				cout << '*';
			else
				cout << ' ';
		cout << '\n';
	}

	return 0;
}