#include <stdio.h>

int main() {
    int choice, n, i, sum, temp;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Print numbers 1 to n and their sum\n");
        printf("2. Print odd numbers 1 to n and their sum\n");
        printf("3. Print even numbers n to 1 and their sum\n");
        printf("4. Currency denomination breakdown\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter n: ");
                scanf("%d", &n);
                sum = 0;
                for (i = 1; i <= n; i++) {
                    printf("%d ", i);
                    sum += i;
                }
                printf("\nSum = %d\n", sum);
                break;

            case 2:
                printf("Enter n: ");
                scanf("%d", &n);
                sum = 0;
                for (i = 1; i <= n; i++) {
                    if (i % 2 != 0) {
                        printf("%d ", i);
                        sum += i;
                    }
                }
                printf("\nSum of odd numbers = %d\n", sum);
                break;

            case 3:
                printf("Enter n: ");
                scanf("%d", &n);
                sum = 0;
                for (i = n; i >= 1; i--) {
                    if (i % 2 == 0) {
                        printf("%d ", i);
                        sum += i;
                    }
                }
                printf("\nSum of even numbers = %d\n", sum);
                break;

           case 4:
                printf("Enter amount: ");
                scanf("%d", &n);

                if (n >= 100) {
                    printf("100 x %d notes\n", n / 100);
                    n %= 100;
                }
                if (n >= 50) {
                    printf("50 x %d notes\n", n / 50);
                    n %= 50;
                }
                if (n >= 20) {
                    printf("20 x %d notes\n", n / 20);
                    n %= 20;
                }
                if (n >= 10) {
                    printf("10 x %d notes\n", n / 10);
                    n %= 10;
                }
                if (n >= 5) {
                    printf("5 x %d notes\n", n / 5);
                    n %= 5;
                }
                if (n >= 2) {
                    printf("2 x %d notes\n", n / 2);
                    n %= 2;
                }
                if (n >= 1) {
                    printf("1 x %d notes\n", n / 1);
                    n %= 1;
                }
                break;


            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
