#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int strongShazan(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num) return num;
    else return -1;
}

void inAndDelShazan(int arr[], int n) {
    int i, index, value;

    printf("\nOriginal Array:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    index = 3;
    value = 102;
    for (i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
    printf("\n\nAfter Insertion (value=%d at index=%d):\n", value, index);
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    index = 4;
    for (i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\n\nAfter Deletion (index=%d):\n", index);
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void characterFreqShazan(int n) {
    char str[100];
    for (int k = 0; k < n; k++) {
        printf("\nEnter string %d: ", k + 1);
        scanf(" %[^\n]", str);

        int freq[256] = {0};
        for (int i = 0; str[i] != '\0'; i++) {
            freq[(unsigned char)str[i]]++;
        }

        printf("\nAnalysis for: %s\n", str);

        printf("Unique characters: ");
        for (int i = 0; i < 256; i++) {
            if (freq[i] == 1) printf("%c ", i);
        }
        printf("\n");

        printf("Duplicate characters: ");
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 1) printf("%c ", i);
        }
        printf("\n");

        printf("Frequency of each character:\n");
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) printf("%c : %d\n", i, freq[i]);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n====== MENU ======\n");
        printf("1. Find Strong Numbers in a Range\n");
        printf("2. Insert and Delete from Array\n");
        printf("3. Analyze Strings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int low = 1;
            int high = 1003;
            printf("\nStrong numbers between %d and %d:\n", low, high);
            for (int i = low; i <= high; i++) {
                if (strongShazan(i) != -1) printf("%d ", i);
            }
            printf("\n");

        } else if (choice == 2) {
            int n = 33;
            int arr[100];
            for (int i = 0; i < n; i++) arr[i] = rand() % 101;
            inAndDelShazan(arr, n);

        } else if (choice == 3) {
            int n = 3;
            characterFreqShazan(n);

        } else if (choice == 4) {
            printf("\nExiting Program...\n");
        } else {
            printf("\nInvalid Choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
