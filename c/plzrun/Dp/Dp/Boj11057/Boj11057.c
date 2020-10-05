#include <stdio.h>

long dp[10][1001];

int main() {
	int n;
	long result = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < 10; i++)
		dp[i][1] = 1;
	for (int j = 2; j <= n; j++) {
		for (int i = 0; i < 10; i++) {
			dp[i][j] = 0;
			for (int k = i; k < 10; k++)
				dp[i][j] += dp[k][j - 1];
			dp[i][j] %= 10007;
		}
	}

	for (int i = 0; i < 10; i++)
		result += dp[i][n];

	printf("%d\n", result % 10007);

	return 0;
}