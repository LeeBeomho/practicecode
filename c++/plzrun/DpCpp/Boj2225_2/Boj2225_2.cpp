#include <iostream>

using namespace std;

int dp[201][201];

int solve(int n, int k) {
	if (dp[n][k] > 0) return dp[n][k];

	if (k == 1)
		dp[n][k] = 1;
	else
		for (int j = 0; j <= n; j++)
			dp[n][k] = (dp[n][k] + solve(n-j, k - 1)) % 1000000000;

	return dp[n][k];
}

int main() {
	int number, int_number;

	cin >> number;
	cin >> int_number;

	

	cout << solve(number, int_number);


	return 0;
}