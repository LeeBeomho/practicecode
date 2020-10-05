#include <iostream>

using namespace std;

long dp[10][101];

int solve(int i, int n) {

	if (n == 1) return 1;

	if (dp[i][n] > 0) return dp[i][n];

	dp[i][n] = 0;
	if (i < 9)
		dp[i][n] += solve(i + 1, n - 1);
	if (i > 0)
		dp[i][n] += solve(i - 1, n - 1);
	dp[i][n] %= 1000000000;

	return dp[i][n];
}

int main() {
	int n;
	long result = 0;

	cin >> n;

	for (int i = 1; i < 10; i++)
		result += solve(i, n);

	cout<<result % 1000000000<<endl;

	return 0;
}