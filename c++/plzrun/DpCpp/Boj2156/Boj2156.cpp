#include <iostream>

using namespace std;

int dp[10001];
int input[10001];

int main() {
	int number;

	dp[0] = 0;
	input[0] = 0;

	cin >> number;
	for (int i = 1; i <= number; i++)
		cin >> input[i];

	dp[1] = input[1];
	if(number>1)
		dp[2] = input[1] + input[2];
	if(number>2)
		for (int i = 3; i <= number; i++) {
			dp[i] = (dp[i - 3] + input[i - 1] + input[i]) > (dp[i - 2] + input[i]) ? (dp[i - 3] + input[i - 1] + input[i]) : (dp[i - 2] + input[i]);
			dp[i] = dp[i] > dp[i - 1] ? dp[i] : dp[i - 1];
		}
	cout << dp[number];

	return 0;
}