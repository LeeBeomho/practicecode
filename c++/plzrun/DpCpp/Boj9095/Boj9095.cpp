#include <iostream>

using namespace std;

int dp[11];


int main() {
	int case_number;
	int n;

	cin >> case_number;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 0; i < case_number; i++) {
		cin >> n;

		for (int j = 4; j <= n; j++)
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];

		cout << dp[n] << endl;
	}

	return 0;
}