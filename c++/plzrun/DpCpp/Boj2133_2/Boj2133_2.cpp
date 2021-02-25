#include <iostream>

using namespace std;

int dp[31];

int solve(int n) {
	if (n % 2 != 0)
		return 0;
	if (dp[n] > 0) return dp[n];

	dp[n] = solve(n - 2) * 3;
	for (int j = 1; n - 2 * j - 2 >= 0; j++)
		dp[n] += solve(n - 2 * j - 2) * 2;

	return dp[n];
}

int main() {
	int number;

	cin >> number;
	dp[0] = 1;

	cout << solve(number);
	return 0;
}