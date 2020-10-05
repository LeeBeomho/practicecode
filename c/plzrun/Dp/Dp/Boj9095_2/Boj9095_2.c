#include <stdio.h>

int dp[11];

int solve(int n) {

	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if (dp[n] > 0) return dp[n];

	dp[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);

	return dp[n];
	/*
	 if (n < 0)return 0;
    if (n <= 1)return 1;
    if (dp[n])return dp[n];
    return dp[n] = solve(n - 3) + solve(n - 2) + solve(n - 1);
	ÃâÃ³ : https://ssu-gongdoli.tistory.com/36
	*/
}

int main() {
	int case_number;
	int n;

	scanf_s("%d", &case_number);

	for (int i = 0; i < case_number; i++) {
		scanf_s("%d", &n);

		printf("%d\n", solve(n));
	}

	return 0;
}