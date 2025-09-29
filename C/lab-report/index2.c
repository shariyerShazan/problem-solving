#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int choice, low, high, i, j, n;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Find prime numbers in a range\n");
        printf("2. Draw pattern\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter low and high: ");
                scanf("%d %d", &low, &high);
                printf("Prime numbers between %d and %d:\n", low, high);
                for (i = low; i <= high; i++) {
                    if (isPrime(i)) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;

            case 2:
                printf("Enter number of rows: ");
                scanf("%d", &n);

                // Top part
                for (i = n; i >= 1; i--) {
                    for (j = 1; j <= n - i; j++) {
                        printf("  ");
                    }
                    for (j = i; j <= 2 * i - 1; j++) {
                        printf("%d ", j);
                    }
                    for (j = 2 * i - 2; j >= i; j--) {
                        printf("%d ", j);
                    }
                    printf("\n");
                }

                // Bottom part (ulto)
                for (i = 1; i <= n ; i++) {
                    for (j = 1; j <= n - i; j++) {
                        printf("  ");
                    }
                    for (j = i; j <= 2 * i - 1; j++) {
                        printf("%d ", j);`
                    }
                    for (j = 2 * i - 2; j >= i; j--) {
                        printf("%d ", j);
                    }
                    printf("\n");
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
