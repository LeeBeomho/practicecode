#include <stdio.h>

int dp[11];


int main() {
	int case_number;
	int n;

	scanf_s("%d", &case_number);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < case_number; i++) {
		scanf_s("%d", &n);

		for (int j = 4; j <= n; j++)
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];

		printf("%d\n", dp[n]);
	}
	/*
	 dp[0] = 1;
	 for (int j = 1; j <= n; j++){

			if (j-1>=0)
				dp[j] += dp[j - 1];
			if (j - 2 >= 0)
				dp[j] += dp[j - 2];
			if (j - 3 >= 0)
				dp[j] += dp[j - 3];
		}
	免贸: https://wootool.tistory.com/77 [快捧府客砒砒]
	*/

	return 0;
}