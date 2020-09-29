#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int j = 1; j <= 2 * n - 1; j++) {
		for (int i = 1; i <= 2 * n - 1; i++)
			if (j <= n) {
				if (i < j)
					cout << ' ';
				else if (i <= 2 * n - j)
					cout << '*';
				else
					break;
			}
			else {
				if (i < 2 * n - j)
					cout << ' ';
				else if (i <= j)
					cout << '*';
				else
					break;
			}
		cout<<'\n';
	}

	return 0;
}