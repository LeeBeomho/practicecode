#include <iostream>

using namespace std;

int input[1001];
int leftdp[1001];
int rightdp[1001];
int dp[1001];

int main() {
	int number;
	int max = 0;

	cin >> number;

	for (int i = 1; i <= number; i++) {
		cin >> input[i];

		leftdp[i] = 1;
		for (int j = 1; j < i; j++)
			if (input[i] > input[j] && leftdp[i] <= leftdp[j])
				leftdp[i] = leftdp[j] + 1;
	}

	for (int i = 0; i < number; i++) {
		rightdp[number-i] = 1;
		for (int j = 0; j < i; j++)
			if (input[number - i] > input[number - j] && rightdp[number - i] <= rightdp[number - j])
				rightdp[number - i] = rightdp[number - j] + 1;

		dp[number - i] = leftdp[number - i] + rightdp[number - i]-1;
		
		if (dp[number - i] > max)
			max = dp[number - i];
	}

	cout << max;

	return 0;
}