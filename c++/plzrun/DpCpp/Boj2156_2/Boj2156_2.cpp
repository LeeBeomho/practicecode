#include <iostream>

using namespace std;

int dp[10001];
int input[10001];

int solve(int n) {

	if (n < 1) return input[0];
	if (n < 2) return input[1];
	if (dp[n] > 0) return dp[n];

	if (n > 2) {
		dp[n] = (solve(n - 3) + input[n - 1] + input[n]) > (solve(n - 2) + input[n]) ? (solve(n - 3) + input[n - 1] + input[n]) : (solve(n - 2) + input[n]);
		dp[n] = dp[n] > solve(n - 1) ? dp[n] : solve(n - 1);
	}
	else
		dp[n] = input[1] + input[2];

	return dp[n];
}

int main() {
	int number;

	input[0] = 0;

	cin >> number;
	for (int i = 1; i <= number; i++)
		cin >> input[i];

	cout << solve(number);

	return 0;
}