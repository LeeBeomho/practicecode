#include <stdio.h>

 long dp[91];


int main() {
	int n;

	scanf_s("%d", &n);

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1];
		if (i - 2 > 0)
			dp[i] += dp[i - 2];
	}

	printf("%ld", dp[n]);

	return 0;
}