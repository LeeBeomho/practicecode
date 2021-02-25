#include <iostream>

using namespace std;

int dp[201][201];

int main() {
	int number, int_number;

	cin >> number;
	cin>>int_number;

	for (int k = 1; k <= int_number; k++) {
		for (int i = 0; i <= number; i++) {
			if (k == 1)
				dp[i][k] = 1;
			else
				for (int j = 0; j <= i; j++)
					dp[i][k] = (dp[i][k] + dp[j][k - 1]) % 1000000000;
		}
	}

	cout << dp[number][int_number];


	return 0;
}