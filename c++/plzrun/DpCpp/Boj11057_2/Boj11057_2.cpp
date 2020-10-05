#include <iostream>

using namespace std;

long dp[10][1001];

int solve(int i, int n) {

	if (n == 1) return 1;

	if (dp[i][n] > 0) return dp[i][n];

	dp[i][n] = 0;

	for (int k = i; k < 10; k++)
		dp[i][n] += solve(k, n - 1);

	dp[i][n] %= 10007;

	return dp[i][n];
}

int main() {
	int n;
	long result = 0;

	cin >> n;

	for (int i = 0; i < 10; i++)
		result += solve(i, n);

	cout<<result % 10007<<endl;

	return 0;
}