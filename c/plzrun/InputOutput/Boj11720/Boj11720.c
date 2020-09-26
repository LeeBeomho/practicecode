#include <stdio.h>

int main() {
	int n;
	char arr[100];
	int result=0;
	
	scanf_s("%d", &n);
	scanf_s("%s", arr, 100);

	for (int i = 0; i < n; i++){
		result += arr[i]-'0';
	}
	
	printf("%d", result);

	return 0;
}