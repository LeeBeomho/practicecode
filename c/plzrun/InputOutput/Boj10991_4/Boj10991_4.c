#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n - j; i++)
			printf(" ");
		for (int i = 1; i < j * 2; i++)
			if (i % 2 == 1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}