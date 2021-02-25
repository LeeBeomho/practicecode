#include <iostream>

using namespace std;

int dp[100001];

int solve(int n) {
	if (dp[n] > 0) return dp[n];

	dp[n] = n;
	for (int j = 1; j * j <= n; j++) {
		if (n - j * j == 0) {
			dp[n] = 1;
			break;
		}

		if (solve(n - j * j) + 1 < dp[n])
			dp[n] = solve(n - j * j) + 1;
	}

	return dp[n];
}

int main() {
	int number;

	cin >> number;
	dp[0] = 0;

	cout << solve(number);

	return 0;
}