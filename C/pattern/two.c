#include<stdio.h>
int main(){

   
   int n  , row , col ;
   printf("Enter N = ");
   scanf("%d" , &n);

//    row reverse
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("%d " , row);
       }
       printf("\n");
   }
printf("\n");

//    row reverse odd / even
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("%d " , row % 2);
       }
       printf("\n");
   }
printf("\n");


//    col reverse
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("%d " , col);
       }
       printf("\n");
   }
printf("\n");


// col reverse odd / even
 for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("%d " , col % 2);
       }
       printf("\n");
   }
printf("\n");



//    row reverse ABC
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("%c " , row + 65);
       }
       printf("\n");
   }
printf("\n");



//    col reverse ABC
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("%c " , col + 65);
       }
       printf("\n");
   }
printf("\n");


// reverse star
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("* ");
       }
       printf("\n");
   }
printf("\n");



// reverse hash
   for(int row = n ; row >= 1 ; row-- ){
       for(col = row ; col >= 1 ; col--){
           printf("# ");
       }
       printf("\n");
   }
printf("\n");

    return 0 ;
}