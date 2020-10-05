#include <iostream>

using namespace std;

long dp[10][101];

int main() {
	int n;
	long result = 0;

	cin >> n;

	for (int i = 0; i < 10; i++)
		dp[i][1] = 1;
	for (int j = 2; j <= n; j++) {
		for (int i = 0; i < 10; i++) {
			dp[i][j] = 0;
			if (i < 9)
				dp[i][j] += dp[i + 1][j - 1];
			if (i > 0)
				dp[i][j] += dp[i - 1][j - 1];
			dp[i][j] %= 1000000000;
		}
	}

	for (int i = 1; i < 10; i++)
		result += dp[i][n];

	cout << result % 1000000000 << endl;

	return 0;
}