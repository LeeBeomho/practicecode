#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++)
            if (i + j < n - 1)
                printf(" ");
            else
                if (n % 2 == 1) {
                    if (i % 2 == j%2)
                        printf("*");
                    else
                        printf(" ");
                }
                else {
                    if (i % 2 != j%2)
                        printf("*");
                    else
                        printf(" ");
                }

        printf("\n");
    }
}
