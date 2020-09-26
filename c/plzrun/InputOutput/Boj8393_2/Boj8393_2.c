#include <stdio.h>


int solve(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return n+solve(n-1);
}

int main() {
	int n;

	scanf_s("%d", &n);

	printf("%d", solve(n));

	return 0;
}