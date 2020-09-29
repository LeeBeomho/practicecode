#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j <= 2 * n - 1; j++) {
		for (int i = 1; i <= 2 * n-1; i++)
			if (j <= n) {
				if (i < j)
					printf(" ");
				else if (i <= 2 * n - j)
					printf("*");
				else
					break;
			}
			else {
				if (i < 2 * n - j)
					printf(" ");
				else if (i <= j)
					printf("*");
				else
					break;
			}
		printf("\n");
	}

	return 0;
}