#include <stdio.h>

int main() {
    while (1) {

        printf("\n Press 1 ➤ Check prime within range");
        printf("\n Press 2 ➤ Check perfect within range");
        printf("\n Press 3 ➤ Check palindrome within range");
        printf("\n Press 4 ➤ Print Diamond");
        printf("\n Press 5 ➤ Exit");

        int choice;
        printf("\n\nEnter choice = ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\nThank you!! Goodbye!!\n");
            break;
        }

        int low, high, count = 0;

        if (choice == 1) {
            printf("Enter low and high = ");
            scanf("%d %d", &low, &high);

            for (int number = low; number <= high; number++) {
                int isPrime = 1; 
                if (number < 2) isPrime = 0; 
                for (int i = 2; i <= number / 2; i++) {
                    if (number % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime == 1) {
                    printf("%d ", number);
                    count++;
                }
            }
            printf("\nTotal primes = %d\n", count);
        } 
        else if (choice == 2) {
            printf("Enter low and high = ");
            scanf("%d %d", &low, &high);

            for (int number = low; number <= high; number++) {
                int sumOfDivisors = 0;
                for (int i = 1; i <= number / 2; i++) {
                    if (number % i == 0) {
                        sumOfDivisors += i;
                    }
                }
                if (sumOfDivisors == number) {
                    printf("%d ", number);
                    count++;
                }
            }
            printf("\nTotal perfect numbers = %d\n", count);
        } 
        else if (choice == 3) {
            printf("Enter low and high = ");
            scanf("%d %d", &low, &high);

            for (int number = low; number <= high; number++) {
                int original = number;
                int reverse = 0;

                while (original != 0) {
                    int digit = original % 10;
                    reverse = reverse * 10 + digit;
                    original /= 10;
                }

                if (reverse == number) {
                    printf("%d ", number);
                    count++;
                }
            }
            printf("\nTotal palindromes = %d\n", count);
        } 
       
        else {
            printf("\nWrong input\n");
        }
    }

    return 0;
}
