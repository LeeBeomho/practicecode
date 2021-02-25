#include <iostream>

using namespace std;

long dp[101];

int main() {
	int test_number, number;

	cin >> test_number;

	for (int i = 0; i < test_number; i++) {
		cin >> number;


		for (int j = 1; j <= number; j++)
			if (j < 3)
				dp[j] = 1;
			else
				dp[j] = dp[j - 2] + dp[j - 3];


		cout << dp[number] << endl;
	}

	return 0;
}