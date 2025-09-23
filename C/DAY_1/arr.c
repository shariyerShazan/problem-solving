#include <stdio.h>
#include <string.h>  

int main() {
    int id;
    printf("Enter id = ");
    scanf("%d", &id);
    getchar(); 

    char a[10];
    printf("Enter string = ");
    fgets(a, 10, stdin);

    a[strlen(a) - 1] = '\0';

    printf("ID = %d and Name = %s\n", id, a);
    return 0;
}



a = hello
b = 

a = helloWorld worldhelloWorld