#include <stdio.h>

int main() {
	int n;

	scanf_s("%d", &n);

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n + j - 1; i++)
			if(j==n)
				printf("*");
			else if (i < n - j + 1)
				printf(" ");
			else if (i==n-j+1||i==n+j-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}