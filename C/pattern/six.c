#include<stdio.h>
int main(){
    int n  , row , col ;
    printf("Enter a number = ");
    scanf("%d"  , &n) ;


// rectangle 
    for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              if(row == 1 || row == n || col == 1 || col == n){         
                      printf("* ");
              }else{
                printf("  ");
            }
          }
          printf("\n");
    }
printf("\n");

    // tringle 
   for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= row ; col++){
              if(row == 1 || row == n || col == 1 || col == row){         
                      printf("* ");
              }else{
                printf("  ");
            }
          }
          printf("\n");
    }
printf("\n");


// print  \ slash
for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              if(row == col){         
                      printf("* ");
              }else{
                printf("  ");
            }
          }
          printf("\n");
    }
printf("\n");



//  print x
for(row = 1 ; row <= n ; row++){
          for(col = 1 ; col <= n ; col++){
              if(row == col || row+col == n+1){         
                      printf("* ");
              }else{
                printf("  ");
            }
          }
          printf("\n");
    }

    return 0 ;
}