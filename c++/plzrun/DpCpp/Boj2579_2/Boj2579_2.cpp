#include <iostream>

using namespace std;

int input[301];
int dp[301];

int solve(int n) {
	if (n <= 0) return 0;
	if (dp[n]>0) return dp[n];

	dp[n] = input[n];
	if (n>=2)
		dp[n]+= input[n - 1] + solve(n - 3) > solve(n - 2) ? input[n - 1] + solve(n - 3) : solve(n- 2);
	
	return dp[n];
}

int main() {
	int number;
	dp[0] = 0;

	cin >> number;

	for (int i = 1; i <= number; i++)
		cin >> input[i];

	cout << solve(number);

	return 0;
}