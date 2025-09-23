#include<stdio.h>
int main(){


    int n , row , col ;
   printf("Enter a number = ");
   scanf("%d" , &n);

// right tringle start
   for(row = 1 ; row <= n ; row++){
       for(col = 1 ; col <= row ; col++){
           printf("* ");
       }
          printf("\n");
   }
   for(row = n-1 ; row >= 1 ; row--){
        for(col = 1 ; col <= row ; col++){
            printf("* ");
        }
        printf("\n");
   }
   printf("\n");



//    row tringle
   for(row = 1 ; row <= n ; row++){
       for(col = 1 ; col <= row ; col++){
           printf("%d " , row);
       }
          printf("\n");
   }
   for(row = n-1 ; row >= 1 ; row--){
        for(col = 1 ; col <= row ; col++){
            printf("%d " , row);
        }
        printf("\n");
   }
   printf("\n");




   //    col tringle
   for(row = 1 ; row <= n ; row++){
       for(col = 1 ; col <= row ; col++){
           printf("%d " , col);
       }
          printf("\n");
   }
   for(row = n-1 ; row >= 1 ; row--){
        for(col = 1 ; col <= row ; col++){
            printf("%d " , col);
        }
        printf("\n");
   }
   printf("\n");



// col tringle with ABC
     for(row = 1 ; row <= n ; row++){
       for(col = 1 ; col <= row ; col++){
           printf("%c " , col + 65);
       }
          printf("\n");
   }
   for(row = n-1 ; row >= 1 ; row--){
        for(col = 1 ; col <= row ; col++){
            printf("%c " , col + 65);
        }
        printf("\n");
   }
   printf("\n");





    return 0 ;
}