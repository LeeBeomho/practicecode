#include <stdio.h>

int dp[1000001];

int solve(int n) {
	
	if (n == 1) return 0;
	if (dp[n] > 0) return dp[n];
	dp[n] = solve(n - 1) + 1;
	if (n % 3 == 0)
		dp[n] = dp[n] < solve(n / 3) + 1 ? dp[n] : solve(n / 3) + 1;
	if (n % 2 == 0)
		dp[n] = dp[n] < solve(n / 2) + 1 ? dp[n] : solve(n / 2) + 1;

	return dp[n];
}

int main() {
	int n;

	scanf_s("%d", &n);


	printf("%d", solve(n));

	return 0;
}