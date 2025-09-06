#include<stdio.h>
int main(){
while(1){
    printf("\nPress 1 to check prime within range");
    printf("\nPress 2 to check perfect within range");
    printf("\nPress 3 to check palindrome within range");
    printf("\nPress 4 to exit");
    int i,n,low,high,rem,rev,f,s,x,c;
    printf("\nEnter choice = ");
    scanf("%d",&x);
    if(x==4){
        printf("\nThank you!! Goodbye!!");
        break;
    }
    switch(x){
        case 1:
            c=0;
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
                if(f==0){
                    printf("%d ",n);
                    c++;
                }
            }
            printf("\nTotal = %d\n",c);
            break;
        case 2:
            c=0;
            printf("Enter low and high = ");
            scanf("%d %d",&low,&high);
            for(n=low;n<=high;n++){
                s=0;
                for(i=1;i<=n/2;i++){
                    if(n%i==0){
                        s=s+i;
                    }
                }
                if(s==n){
                    printf("%d ",n);
                    c++;
                }
            }
            printf("\nTotal = %d\n",c);
            break;
        case 3:
            c=0;
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
            printf("\nTotal = %d\n",c);
            break;
        default:
            printf("\nWrong input\n");
}
}
return 0;
}