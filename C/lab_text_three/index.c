#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


void pattern(int n) {
    int i, j;

    // first line ta
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

    // ulto line ta
     for (i = 1; i <= n; i++) {
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
}


// second sort
// void sort(int n ){
//         int i , j, t ;
//         for(i = 0 ; i < 20 ; i++){
//             a[i] = rand() % 101;
//             printf("%d ",a[i]);
//         }
    


// }



void checkPalindrome(char* r) {

    char reverse[strlen(r) + 1];
    // char mainChar = r;
    for (int i = 0; i < strlen(r); i++) {
        reverse[i] = r[strlen(r) - i - 1];
    }
    reverse[strlen(r)] = '\0'; 

    // if ( r == reverse ) {
    //     printf("%s is a palindrome.\n", r);
    // } else {
    //     printf("%s is not a palindrome.\n", r);
    // }
      if (strcmp( r , reverse) == 0) {
        printf("%s is a palindrome.\n", r);
    } else {
        printf("%s is not a palindrome.\n", r);
    }
}


int main() {
    pattern(5);
    checkPalindrome("abba");
    // checkPalindrome("papa");


    // checkPalindrome("shazan");
    return 0;
}