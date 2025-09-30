#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void pattern(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(j=i;j<=2*i-1;j++)
            printf("%d ",j);
        for(j=2*i-2;j>=i;j--)
            printf("%d ",j);
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf("  ");
        for(j=i;j<=2*i-1;j++)
            printf("%d ",j);
        for(j=2*i-2;j>=i;j--)
            printf("%d ",j);
        printf("\n");
    }
}
void sort(int n){
    int i,j,t,a[n];
    printf("\n\nArray\n");
    for(i=0;i<n;i++){
        a[i]=rand()%101;
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++){
       for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
       }
    }
    printf("\n\nSorted Array\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void transpose(int r,int c){
    int i,j,a[r][c],b[c][r];
    printf("\n\nMatrix A\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        a[i][j]=rand()%21;
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        b[j][i]=a[i][j];
    }
    }
    printf("\n\nMatrix B\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    }

}
void c_p(int n){
char a[100],b[100];
int i,j;
while(n--){
printf("\nEnter the string = ");
fgets(a,100,stdin);
a[strlen(a)-1]='\0';
j=0;
for(i=strlen(a)-1;i>=0;i--){
    b[j]=a[i];
    j++;
}
b[j]='\0';
printf("Reverse = %s",b);
if(strcmp(a,b)==0){
    printf("\nPalindrome");
}
else{
    printf("\nNot Palindrome");
}
}
}
void c_f(int n){
char a[100];
int i;
while(n--){
int f[256]={0};
printf("\nEnter the string = ");
fgets(a,100,stdin);
a[strlen(a)-1]='\0';
for(i=0;i<strlen(a);i++){
    f[a[i]]++;
}
for(i=0;i<256;i++){
    if(f[i]!=0)
        printf("'%c' %d\t\n",i,f[i]);
}
}
}
int main(){
    int n,x,r,c;
    while(1){
  printf("\nPress 1 for pattern");
  printf("\nPress 2 for sort");
  printf("\nPress 3 for transpose");
  printf("\nPress 4 for checking palindrome");
  printf("\nPress 5 for character frequency");
  printf("\nPress 6 for exit");
  printf("\nEnter choice = ");
  scanf("%d",&x);
  if(x==6){
    printf("\nThank you! Goodbye!");
    break;
  }
  switch(x){
case 1:
    printf("Enter no of lines = ");
    scanf("%d",&n);
    pattern(n);
    break;
 case 2:
    printf("Enter no of elements = ");
    scanf("%d",&n);
    sort(n);
    break;
  case 3:
    printf("Enter no of rows and columns = ");
    scanf("%d %d",&r,&c);
    transpose(r,c);
    break;
  case 4:
    printf("Enter no of strings = ");
    scanf("%d",&n);
    getchar();
    c_p(n);
    break;
case 5:
    printf("Enter no of strings = ");
    scanf("%d",&n);
    getchar();
    c_f(n);
    break;
default:
    printf("\nWrong input");
  }
}
return 0;
}