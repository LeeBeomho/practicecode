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
	/*
	 for (int j = 2; j <= n; j++) {
      dp[9][j] = 1;
      for (int i = 1; i < 10; i++) {
         dp[9-i][j] = (dp[10-i][j] + dp[9-i][j - 1])%10007;
      }
	}
	0~9로 시작하는 수
	for (i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][0];
		for (j = 1; j <= 9; j++) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
		}
	}
	0~9로 끝나는 수

	출처:http://wookje.dance/2017/04/18/boj-11057-%EC%98%A4%EB%A5%B4%EB%A7%89-%EC%88%98/
	*/


	for (int i = 0; i < 10; i++)
		result += dp[i][n];

	printf("%d\n", result % 10007);

	return 0;
}