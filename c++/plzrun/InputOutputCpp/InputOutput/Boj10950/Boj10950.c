#include <stdio.h>

int main() {
	int t;
	int a, b;

	scanf_s("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf_s("%d %d", &a, &b);

		printf("%d\n",  a + b);
	}

	return 0;
}