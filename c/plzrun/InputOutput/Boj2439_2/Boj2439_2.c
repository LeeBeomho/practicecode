#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j <= n; j++) {
		for (int i = 0; i < n - j; i++)
			printf(" ");
		for (int i = 0; i < j; i++)
			printf("*");
		printf("\n");
	}

	return 0;
}