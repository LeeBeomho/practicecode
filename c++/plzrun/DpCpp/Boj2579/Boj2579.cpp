#include <iostream>

using namespace std;

int input[301];
int dp[301];

int main() {
	int number;
	dp[0] = 0;

	cin >> number;

	for (int i = 1; i <= number; i++) {
		cin >> input[i];

		if (i <= 2)
			dp[i]=input[1];
		if (i == 2)
			dp[i] += input[i];
		if (i > 2)
			dp[i] = input[i - 1] + dp[i - 3] > dp[i - 2] ? input[i] + input[i - 1] + dp[i - 3] : input[i] + dp[i - 2];

	}

	cout << dp[number];

	return 0;
}