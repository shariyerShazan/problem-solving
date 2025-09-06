#include<stdio.h>
int main(){
    while(1){
    printf("\nPress 1 for minimum notes");
    printf("\nPress 2 for series (1,10,20,...,n) and sum");
    printf("\nPress 3 for 1 to n even, sum, odd, sum");
    printf("\nPress 4 for exit");
    int i,x,n,sum,p;
    printf("\nEnter choice = ");
    scanf("%d",&x);
    if(x==4){
        printf("Goodbye!!");
        break;
    }
    switch(x){
        case 1:
            printf("Enter amount = ");
            scanf("%d",&n);
            if(n>=100){
                printf("\n%d x 100 $",n/100);
                n=n%100;
            }
            if(n>=50){
                printf("\n%d x 50 $",n/50);
                n=n%50;
            }
            if(n>=20){
                printf("\n%d x 20 $",n/20);
                n=n%20;
            }
            if(n>=10){
                printf("\n%d x 10 $",n/10);
                n=n%10;
            }
            if(n>=5){
                printf("\n%d x 5 $",n/5);
                n=n%5;
            }
            if(n>=2){
                printf("\n%d x 2 $",n/2);
                n=n%2;
            }
            if(n>=1){
                printf("\n%d x 1 $",n/1);

            }
            break;

        case 2:
            p=1,i=1,sum=0;
            printf("Enter n = ");
            scanf("%d",&n);
            while(p<=n){
                printf("%d ",p);
                sum=sum+p;
                p=i*10;
                i++;
            }
            printf("\nSum = %d",sum);
            break;
        case 3:
            sum=0;
            printf("Enter n = ");
            scanf("%d",&n);
            for(i=1;i<=n;i++){
                if(i%2!=0){
                    continue;
                }
                sum=sum+i;
                printf("%d ",i);
            }
            printf("\nSum (even) = %d\n",sum);
            sum=0;
            for(i=1;i<=n;i++){
                if(i%2==0){
                    continue;
                }
                sum=sum+i;
                printf("%d ",i);
            }
            printf("\nSum (odd) = %d",sum);
            break;
        default:
            printf("Wrong operation!Try Again!");
        }
    }
    return 0;
}