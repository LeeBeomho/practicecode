#include <iostream>

using namespace std;

int dp[11];

int solve(int n) {

	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 4;
	if (dp[n] > 0) return dp[n];

	dp[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);

	return dp[n];
}

int main() {
	int case_number;
	int n;

	cin >> case_number;

	for (int i = 0; i < case_number; i++) {
		cin >> n;

		cout << solve(n) << endl;
	}

	return 0;
}