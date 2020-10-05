#include <iostream>

using namespace std;

int dp[1001];

int solve(int n) {

	if (n == 1) return 1;
	if (n == 2) return 2;
	if (dp[n] > 0) return dp[n];

	dp[n] = (solve(n - 1) + solve(n - 2)) % 10007;

	return dp[n];
}

int main() {
	int n;

	cin >> n;

	cout << solve(n) << endl;

	return 0;
}