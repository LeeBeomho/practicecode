#include <iostream>

using namespace std;

int input[1001];
int leftdp[1001];
int rightdp[1001];

int leftsolve(int n) {
	if (leftdp[n] > 0) return leftdp[n];
	
	leftdp[n] = 1;
	for (int i = 1; i < n; i++)
		if (input[n] > input[n - i] && leftdp[n] <= leftsolve(n - i))
			leftdp[n] = leftsolve(n - i) + 1;
	
	return leftdp[n];
}

int rightsolve(int n, int number) {
	if (rightdp[n] > 0) return rightdp[n];

	rightdp[n] = 1;
	for (int i = n + 1; i <= number; i++)
		if (input[n] > input[i] && rightdp[n] <= rightsolve(i, number))
			rightdp[n] = rightsolve(i, number) + 1;

	return rightdp[n];
}

int solve(int n) {
	int max = 0;

	for(int i=1; i<=n; i++)
		if(max<(leftsolve(i)+rightsolve(i, n)))
			max=leftsolve(i) + rightsolve(i, n);

	max--;
	return max;
}

int main() {
	int number;

	cin >> number;

	for (int i = 1; i <= number; i++)
		cin >> input[i];

	cout << solve(number);
	return 0;
}