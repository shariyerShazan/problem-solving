#include<stdio.h>
int main(){

    int n , col , row ;
    printf("Enter a number = ") ;
    scanf("%d" , &n);



// quadrilateral pattern star
    for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              printf("* ");
          }
          printf("\n");
    }
    printf("\n");


    // quadrilateral pattern num col
    for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              printf("%d " , col);
          }
          printf("\n");
    }
    printf("\n");



      // quadrilateral pattern num row
    for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              printf("%d " , row);
          }
          printf("\n");
    }
    printf("\n");



          // quadrilateral pattern num row abc
    for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              printf("%c " , row + 65);
          }
          printf("\n");
    }
    printf("\n");



              // quadrilateral pattern num col abc
    for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              printf("%c " , col + 65);
          }
          printf("\n");
    }
    printf("\n");




    return 0 ;
}