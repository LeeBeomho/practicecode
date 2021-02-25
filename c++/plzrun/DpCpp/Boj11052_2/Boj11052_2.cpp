#include <iostream>

using namespace std;

int input[1001];
int dp[1001];

int solve(int n) {
	if (dp[n] > 0) return dp[n];
	
	dp[n] = input[n];
	for (int j = 1; j < n; j++)
		if (dp[n] < solve(n - j) + solve(j))
			dp[n] = solve(n - j) + solve(j);
	return dp[n];
}

int main() {
	int number;

	cin >> number;

	for (int i = 1; i <= number; i++) {
		cin >> input[i];
	}


	cout << solve(number);

	return 0;
}