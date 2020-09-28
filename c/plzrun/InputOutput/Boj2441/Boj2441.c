#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 0; j < n; j++) {
		for (int i = 1; i <= n; i++)
			if (i <= j)
				printf(" ");
			else
				printf("*");
		printf("\n");
	}

	return 0;
}