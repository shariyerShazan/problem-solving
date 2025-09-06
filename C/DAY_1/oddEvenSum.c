#include<stdio.h>
int main(){
for(;;){
printf("\nPress 1 for 1 to n and sum");
printf("\nPress 2 for 1 to n odd and sum");
printf("\nPress 3 for 1 to n even and sum");
printf("\nPress 4 for grade");
printf("\nPress 5 for exit");
int x,n,i,sum;
printf("\nEnter choice = ");
scanf("%d",&x);
if(x==5){
    printf("Thank you! Khela hobe!");
    break;
}
switch(x){

case 1:
    sum = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nSum = %d",sum);
    break;
case 2:
    sum = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nSum = %d",sum);
    break;
case 3:
    sum = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            continue;
        }
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nSum = %d",sum);
    break;
case 4:
    printf("Enter marks = ");
    scanf("%d",&n);
    if(n<0 || n>100)
        printf("invalid");
    else if(n>=80)
        printf("You got A+");
    else if(n>=70)
        printf("You got A");
    else if(n>=60)
        printf("You got B");
    else if(n>=50)
        printf("You got C");
    else
        printf("You got F");
    break;
default:
    printf("Wrong input! Do not be stupid!");

}
}
return 0;
}