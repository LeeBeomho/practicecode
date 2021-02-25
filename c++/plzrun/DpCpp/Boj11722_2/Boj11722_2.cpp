#include <iostream>

using namespace std;

int dp[1001];
int input[1001];

int solve(int n) {
	if (n==1) return 1;
	if (dp[n] > 0) return dp[n];

	dp[n] = 1;
	for (int i = n - 1; i > 0; i--)
		if (input[n] < input[i] && dp[n] <= solve(i))
			dp[n] = solve(i) + 1;

	return dp[n];
}

int main() {
	int number;
	int max = 0;

	cin >> number;

	for (int i = 1; i <= number; i++) {
		cin >> input[i];

		if (max < solve(i))
			max = solve(i);
	}

	cout << max;

	return 0;
}