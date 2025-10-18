#include<stdio.h>

int main(){
    int i , j , n= 7 ;
    for(i=1 ; i<= n ; i++){
        for(j = 1 ; j<=2*i -1 ; j++){
            if(j%2 != 0 && j%3 != 0){
                printf("%c" , j/65);
            }else if (j%3 == 0) {
                 printf("# ");
            } else if(j%2 == 0){
                printf("%d" , j/2);
            }
        }
        printf("\n");
    }
    return 0;
}