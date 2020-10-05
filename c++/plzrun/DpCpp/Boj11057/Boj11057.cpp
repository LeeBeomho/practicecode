#include <iostream>

using namespace std;

long dp[10][1001];

int main() {
	int n;
	long result = 0;

	cin >> n;

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

	cout<<result % 10007<<endl;

	return 0;
}