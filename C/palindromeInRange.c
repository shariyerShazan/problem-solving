#include<stdio.h>
int main(){

   int n,f,c=0,low,high,rem,rev;
   printf("Enter low and high = ");
   scanf("%d %d",&low,&high);
    for(n=low;n<=high;n++){
    f=n;
    rev=0;
    while(f!=0){
        rem=f%10;
        rev=rev*10+rem;
        f=f/10;
    }
    if(rev==n){
        printf("%d ",n);
        c++;
    }
    }
printf("\nTotal = %d",c);
return 0;
}