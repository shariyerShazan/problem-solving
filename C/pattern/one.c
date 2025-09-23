#include<stdio.h>
int main(){

   int n , row , col ;
   printf("Enter N = ");
   scanf("%d" , &n) ;


// print col
   for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("%d " , col) ;
        }
        printf("\n");
   } 

printf("\n");


// row col odd / even 
   for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("%d " , col%2) ;
        }
        printf("\n");
   } 

printf("\n");


// print row
   for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("%d " , row) ;
        }
        printf("\n");
   } 

printf("\n");

// row binary odd / even
    for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("%d " , row%2) ;
        }
        printf("\n");
   } 


printf("\n");

// star
 for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("* ") ;
        }
        printf("\n");
   } 

printf("\n");


// hash 
for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("# ") ;
        }
        printf("\n");
   } 

printf("\n");


// ABC in col
for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("%c " , (col+64)) ;
        }
        printf("\n");
   } 


 printf("\n");


// ABC in row
for(row = 1 ; row <= n ; row++ ){
        for(col = 1 ; col <= row ; col++){
            printf("%c " , (row+64)) ;
        }
        printf("\n");
   } 


    return 0 ;
}