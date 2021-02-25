#include <iostream>

using namespace std;

int dp[1001];
int input[1001];

int main() {
	int number;
	int max = 0;

	cin >> number;
	
	for (int i = 1; i <= number; i++) {
		cin >> input[i];

		dp[i] = 1;
		
		for (int j = 1; j < i; j++)
			if (input[i] < input[j] && dp[i] <= dp[j])
				dp[i] = dp[j] + 1;

		if (max < dp[i])
			max = dp[i];
	}
	
	cout << max;

	return 0;
}