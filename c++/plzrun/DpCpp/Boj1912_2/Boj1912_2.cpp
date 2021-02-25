#include <iostream>

using namespace std;

int input[100001];
int dp[100001];
int check[100001];

int solve(int n){
	if (check[n]==1) return dp[n];

	dp[n] = input[n];
	check[n] = 1;
	if (solve(n-1) > 0)
		dp[n] += solve(n-1);

	return dp[n];
}

int main() {
	int number;
	int max;
	dp[0] = 0;
	check[0] = 1;

	cin >> number;

	for (int i = 1; i <= number; i++)
		cin >> input[i];

	solve(number);

	max = dp[1];

	for (int i = 2; i <= number; i++)
		if (max < dp[i])
			max = dp[i];

	cout << max;

	return 0;
}