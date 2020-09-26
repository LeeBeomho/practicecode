#include <stdio.h>

int main() {
	int n;
	char arr[100];
	int result = 0;

	scanf_s("%d", &n);
	scanf_s("%s", arr, 100);

	for (int i = 0; arr[i] != NULL; i++) {
		if (i % 10 == 0 && i != 0)
			printf("\n");
		printf("%c", arr[i]);
	}

	return 0;
}