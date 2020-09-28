#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j < 2 * n; j++) {
		for (int i = 1; i <= n; i++)
			if (j <= n) {
				if (i <= n - j)
					cout<<' ';
				else
					cout<<'*';
			}
			else {
				if (i <= j - n)
					cout << ' ';
				else
					cout<<'*';
			}
		cout << '\n';
	}

	return 0;
}