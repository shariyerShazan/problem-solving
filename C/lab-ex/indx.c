#include <stdio.h>

int main()
{
    while (1)
    {
        int n;

        printf("\nFor palindrome in range enter 1 \n");
        printf("For pattern enter 2 \n");
        printf("For exit exnter 3 \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            int n , f, c = 0, low, high, rem, rev;
            printf("Enter low and high = ");
            scanf("%d %d", &low, &high);
            for (n = low; n <= high; n++)
            {
                f = n;
                rev = 0;
                while (f != 0)
                {
                    rem = f % 10;
                    rev = rev * 10 + rem;
                    f = f / 10;
                }
                if (rev == n)
                {
                    printf("%d ", n);
                    c++;
                }
            }
            printf("\nTotal = %d", c);
        }
        break;
        case 2:
        {
            int n , i , j , ct =0  , num = 1;
            printf("Enter a number or row: \n");
            scanf("%d" , &n);
            for(i = 1 ; i <= n ; i++){
                for(j = 1 ; j<= n-i ; j++){
                    printf("  ");
                }
                for(j = 1 ; j<= i ; j++){
                    if(i%2 ==0){
                        printf("%c "  , 65+ ct);
                        
                    } else {
                        printf("%d " , num);
                    }
                }
                for(j = i -1 ; j>= 1 ; j--){
                    if(i%2 ==0){
                        printf("%c "  , 65+ ct);
                        
                    } else {
                        printf("%d " , num);
                    }
                }
                 if(i%2 ==0){
                       ct++;
                        
                    } else {
                           num++;
                    }
                
             
                     printf("\n");
            }
            // for(i = 1 ; i <= n ; i++){
                
            // }
        }
        break;
        case 3:
        {
            printf("ThankYou! \n");
            return 0;
        }
        default:
        {
            printf("Wrong number inpouted!");
            break;
        }
        }
    }
    return 0;
}