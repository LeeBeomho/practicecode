#include <stdio.h>

long dp[91];

long solve(int n) {

	if (n < 0) return 0;
	if (n <= 2) return 1;
	if (dp[n] > 0) return dp[n];

	dp[n] = solve(n - 1)+ solve(n - 2);
	
	return dp[n];
}

int main() {
	int n;

	scanf_s("%d", &n);


	printf("%ld", solve(n));

	return 0;
}