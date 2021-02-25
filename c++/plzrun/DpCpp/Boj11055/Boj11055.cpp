#include <iostream>

using namespace std;

int dp[1001];
int input[1001];

int main() {
	int number;
	int max = 0;

	dp[0] = 0;
	input[0] = 0;

	cin >> number;
	for (int i = 1; i <= number; i++) {
		cin >> input[i];
		dp[i] = input[i];
		for (int j = 1; j < i; j++)
			if (input[i] > input[j]&& dp[j] + input[i]>dp[i])
				dp[i] = dp[j] + input[i];
		if (dp[i] > max)
			max = dp[i];
	}

	cout << max;

	return 0;
}