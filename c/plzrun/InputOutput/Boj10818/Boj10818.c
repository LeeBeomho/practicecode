#include <stdio.h>
#include <limits.h>

int main() {
	int n;
	int input;
	int max, min;
	min = INT_MAX;
	max = INT_MIN;
	

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &input);
		if (max < input)
			max = input;
		if (min > input)
			min = input;
	}

	printf("%d %d", min, max);

	return 0;
}