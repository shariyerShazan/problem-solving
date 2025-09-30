#include <stdio.h>
#include <string.h>

// Function to check palindrome
int isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    return (rev == num);
}

// Function to check prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return (sum == num);
}

// Function to print palindrome numbers in range
void palindromeInRange() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print prime numbers in range
void primeInRange() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print perfect numbers in range
void perfectInRange() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Perfect numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print diamond pattern
void diamondPattern() {
    int n;
    printf("Enter number of rows for diamond: ");
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to reverse a string
void reverseString() {
    char str[100], rev[100];
    printf("Enter a string: ");
    getchar(); // clear buffer string
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);
}

// Main function with menu
int main() {
    int choice;
    while (1) {
        printf("\n------- MENU -------\n");
        printf("1. Palindrome numbers in range\n");
        printf("2. Prime numbers in range\n");
        printf("3. Perfect numbers in range\n");
        printf("4. Diamond pattern\n");
        printf("5. Reverse a string\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: palindromeInRange(); break;
            case 2: primeInRange(); break;
            case 3: perfectInRange(); break;
            case 4: diamondPattern(); break;
            case 5: reverseString(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
