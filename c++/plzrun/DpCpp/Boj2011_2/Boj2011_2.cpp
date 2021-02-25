#include <iostream>
#include <string>

using namespace std;

int dp[5001];
string number;

int solve(int n) {
	if (n == 1 && number[1] == '0') return 0;
	if (n == 0) return 1;
	if (dp[n] > 0) return dp[n];

	if (number[n - 1] > '0' && number[n - 1] <= '9')
		dp[n] = solve(n - 1);

	if (n == 1) return dp[n];

	int temp = number[n - 1] - '0' + 10 * (number[n - 2] - '0');
	if (temp >= 10 && temp <= 26)
		dp[n] = (dp[n] + solve(n-2)) % 1000000;

	return dp[n];
}

int main() {
	cin >> number;

	cout << solve(number.length());

	return 0;
}