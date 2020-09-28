#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j < 2*n; j++) {
		for (int i = 1; i <= n; i++)
			if (j <= n) {
				if (i <= n - j)
					printf(" ");
				else
					printf("*");
			}
			else {
				if (i <= j-n)
					printf(" ");
				else
					printf("*");
			}
		printf("\n");
	}

	return 0;
}