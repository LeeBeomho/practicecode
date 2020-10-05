#include <stdio.h>

long dp[10][10001];

int solve(int i, int n) {

	if (n == 1) return 1;

	if (dp[i][n] > 0) return dp[i][n];

	dp[i][n] = 0;
	
	for(int k=i; k<10; k++)
		dp[i][n] += solve(k, n - 1);

	dp[i][n] %= 10007;

	return dp[i][n];
}

int main() {
	int n;
	long result = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < 10; i++)
		result += solve(i, n);

	printf("%d\n", result % 10007);

	return 0;
}