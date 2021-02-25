#include <iostream>

using namespace std;

int input[1001];
int dp[1001];

int main() {
	int number;

	cin >> number;

	dp[0] = 0;

	for (int i = 1; i <= number; i++) {
		cin >> input[i];

		dp[i] = input[i];
		for (int j = 1; j < i; j++)
			if (dp[i] < dp[i - j] + dp[j])
				dp[i] = dp[i - j] + dp[j];
	}


	cout << dp[number];

	return 0;
}