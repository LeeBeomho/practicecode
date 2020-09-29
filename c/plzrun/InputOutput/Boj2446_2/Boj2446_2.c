#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j <= n; j++) {
		for (int i = 0; i < j-1; i++)
			printf(" ");
		for (int i = 0; i < 2*(n-j)+1; i++)
			printf("*");
		printf("\n");
	}
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < n-j-1; i++)
			printf(" ");
		for (int i = 0; i <2*j+1; i++)
			printf("*");
		printf("\n");
	}

	return 0;
}