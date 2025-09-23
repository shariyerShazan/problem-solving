#include<stdio.h>
int main(){

    int n , row , col ;
    printf("Enter a number =");
    scanf("%d" , &n);

//  right - up tringle
        for(row = 1 ; row <= n ; row++){
               for(col = 1 ; col <= n-row ; col++){
                printf("  ");
               }
               for(col = 1 ; col <= row ; col++){
                printf("* ");
               }
               printf("\n");
        }
  printf("\n");

  



        // dimond
        for(row = 1 ; row <= n ; row++){
               for(col = 1 ; col <= n-row ; col++){
                printf("  ");
               }
               for(col = 1 ; col <= row ; col++){
                printf("* ");
               }
               for(col = row -1 ; col >=1 ; col--){
                printf("* ");
               }
               printf("\n");
          }
          for(row = n-1 ; row >= 1 ; row--){
               for(col = 1 ; col <= n-row ; col++){
                printf("  ");
               }
               for(col = 1 ; col <= row ; col++){
                printf("* ");
               }
               for(col = row -1 ; col >=1 ; col--){
                printf("* ");
               }
               printf("\n");
          }
    return 0 ;
}