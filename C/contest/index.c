#include <stdio.h>
#include <string.h>

void countString() {
    char a[100];
    int i;
     int UniqueCharNum = 0 ;
    // while (n--) {
        int f[256] = {0}; 
        printf("\nEnter the string: ");
        fgets(a, 100, stdin);

        size_t len = strlen(a);
        if (len > 0 && a[len - 1] == '\n') {
            a[len - 1] = '\0';
        }

        for (i = 0; i < strlen(a); i++) {
            f[(unsigned char)a[i]]++;
        }

        printf("Character frequencies:\n");
        for (i = 0; i < 256; i++) {
            if (f[i] != 0) {
                printf("'%c': %d\n", i, f[i]);
                UniqueCharNum++ ;
            }
        }
        if(UniqueCharNum % 2 == 0){
            printf("\nCHAT WITH HER!");
        }else{
            printf("\nIGNORE HIM!");
        }
    // }
}

int main() {
    // int n; 
    // printf("Enter the number of strixngs: ");
    // scanf("%d", &n);
    // getchar(); 

    countString();

    return 0;
}