#include <iostream>

using namespace std;

int dp[1001];
int input[1001];

int solve(int n) {
	if (dp[n] > 0) return dp[n];

	dp[n] = 1;
	for (int j = 1; j < n; j++)
		if (input[n] > input[j] && dp[n] <= solve(j))
			dp[n] = solve(j) + 1;

	return dp[n];
}

int main() {
	int number;
	int max = 0;

	dp[0] = 0;
	input[0] = 0;

	cin >> number;
	for (int i = 1; i <= number; i++) {
		cin >> input[i];
		if (solve(i) > max)
			max = solve(i);
	}

	cout << max;

	return 0;
}