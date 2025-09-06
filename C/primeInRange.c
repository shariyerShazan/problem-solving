#include<stdio.h>
int main(){

   int i,n,f,c=0,low,high;
   printf("Enter low and high = ");
   scanf("%d %d",&low,&high);
    for(n=low;n<=high;n++){
            f=0;
   for(i=2;i<=n/2;i++){
    if(n%i==0){
        f=1;
        break;
    }
   }
   if(f==0 && n!=1){
    printf("%d ",n);
    c++;

}
    }
printf("\nTotal = %d",c);
return 0;
}