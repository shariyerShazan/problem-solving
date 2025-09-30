#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return (rev == num);
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++)
        if (num % i == 0) sum += i;
    return (sum == num);
}

void palindromeInRange() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    printf("Palindrome numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++)
        if (isPalindrome(i)) printf("%d ", i);
    printf("\n");
}

void primeInRange() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++)
        if (isPrime(i)) printf("%d ", i);
    printf("\n");
}

void perfectInRange() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    printf("Perfect numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++)
        if (isPerfect(i)) printf("%d ", i);
    printf("\n");
}

void diamondPattern() {
    int n;
    printf("Enter number of rows for diamond: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("* ");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) printf("  ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("* ");
        printf("\n");
    }
}

void reverseString() {
    char str[100], rev[100];
    printf("Enter a string: ");
    getchar();
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) rev[j++] = str[i];
    rev[j] = '\0';
    printf("Reversed string: %s\n", rev);
}

void sortArray() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Randomly generated array:\n");
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 101; // 0-100
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void transposeMatrix() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[c][r];
    printf("Randomly generated matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][j] = rand() % 21; // 0-20
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            b[j][i] = a[i][j];
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}

int main() {
    int choice;
    srand(time(NULL));
    while (1) {
        printf("\n------- MENU -------\n");
        printf("1. Palindrome numbers in range\n");
        printf("2. Prime numbers in range\n");
        printf("3. Perfect numbers in range\n");
        printf("4. Diamond pattern\n");
        printf("5. Reverse a string\n");
        printf("6. Sort a random array\n");
        printf("7. Transpose a random matrix\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: palindromeInRange(); break;
            case 2: primeInRange(); break;
            case 3: perfectInRange(); break;
            case 4: diamondPattern(); break;
            case 5: reverseString(); break;
            case 6: sortArray(); break;
            case 7: transposeMatrix(); break;
            case 8: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
