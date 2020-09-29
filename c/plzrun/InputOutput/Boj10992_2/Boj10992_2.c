#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j < n; j++) {
		for (int i = 1; i <= n - j; i++)
			printf(" ");
		if(j!=1)
			printf("*");
		for (int i = 1; i < 2*(j-1); i++)
			printf(" ");
		printf("*\n");
	}
	for (int i = 1; i < 2*n; i++)
		printf("*");
	printf("\n");

	return 0;
}