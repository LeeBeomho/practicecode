#include <stdio.h>

int main() {
	int a, b;

	while (scanf_s("%d %d", &a, &b) != EOF) {
		if (a == 0 && b == 0)
			break;
		else
			printf("%d\n", a + b);
	}


	return 0;
}