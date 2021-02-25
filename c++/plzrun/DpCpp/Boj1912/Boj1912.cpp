#include <iostream>

using namespace std;

int input[100001];
int dp[100001];

int main() {
	int number;
	int max;
	dp[0] = 0;

	cin >> number;

	for (int i = 1; i <= number; i++) {
		cin >> input[i];
		if (i == 1)
			max = input[i];

		dp[i] = input[i];
		if (dp[i - 1] > 0)
			dp[i] += dp[i-1];

		if (max < dp[i])
			max = dp[i];
	}

	cout << max;

	return 0;
}