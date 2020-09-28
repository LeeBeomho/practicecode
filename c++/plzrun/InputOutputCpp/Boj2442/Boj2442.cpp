#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n + j - 1; i++)
			if (i <= n - j)
				cout << ' ';
			else
				cout << '*';
		cout << '\n';
	}

	return 0;
}