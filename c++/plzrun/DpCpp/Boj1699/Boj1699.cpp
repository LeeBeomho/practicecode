#include <iostream>

using namespace std;

int dp[100001];

int main() {
	int number;

	cin >> number;
	dp[0] = 0;
	for (int i = 1; i <= number; i++){
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (i - j * j == 0) {
				dp[i] = 1;
				break;
			}

			if (dp[i - j * j] + 1 < dp[i])
				dp[i] = dp[i - j * j] + 1;

		}
	}

	cout << dp[number];

	return 0;
}