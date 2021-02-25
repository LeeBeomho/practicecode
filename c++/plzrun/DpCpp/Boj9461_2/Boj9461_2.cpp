#include <iostream>

using namespace std;

long dp[101];

long solve(int n) {
	if (n <= 0) return 0;
	if (dp[n] > 0) return dp[n];
	if (n < 3)
		dp[n] = 1;
	else
		dp[n] = solve(n - 2) + solve(n - 3);


	return dp[n];
}

int main() {
	int test_number, number;

	cin >> test_number;

	for (int i = 0; i < test_number; i++) {
		cin >> number;


		cout << solve(number) << endl;
	}

	return 0;
}