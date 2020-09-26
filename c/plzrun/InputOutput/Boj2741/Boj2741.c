#include <stdio.h>

int main() {
	int n; //100,000 같거나 작은 n

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", i + 1);
	}



	return 0;
}