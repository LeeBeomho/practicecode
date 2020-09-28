#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j <= 2 * n - 1; j++) {
		for (int i = 1; i <= 2 * n; i++)
			if (j <= n) {
				if (i <= j || i > 2 * n - j)
					cout << "*";
				else
					cout << " ";
			}
			else {
				if (i <= 2 * n - j || i > j)
					cout << "*";
				else
					cout << " ";
			}
		cout << '\n';
	}

	return 0;
}