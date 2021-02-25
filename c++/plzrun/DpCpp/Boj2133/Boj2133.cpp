#include <iostream>

using namespace std;

int dp[31];

int main() {
	int number;

	cin >> number;
	dp[0] = 1;

	if(number%2==0)
		for (int i = 2; i <= number; i+=2) {
			dp[i] += dp[i - 2] * 3;
			for (int j = 1; i - 2 * j - 2 >= 0; j++)
				dp[i] += dp[i - 2 * j - 2] * 2;
		}

	cout << dp[number];
	return 0;
}