#include <stdio.h>

int main() {
	int n;
	int result = 0;

	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		result += i;
	}

	printf("%d\n", result);

	return 0;
}