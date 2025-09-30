#include<stdio.h>
#include<string.h>
typedef struct student
{
     int id ;
     char name[30];
     float cgpa;
}student;

int main(){
    student a ;
    printf("%zu\n" , sizeof(a));
    a.id = 2025 ;
    strcpy(a.name , "Shazan") ;
    a.cgpa = 3.54 ;
    printf("ID = %d\nName = %s\nCGPA = %.2f" , a.id , a.name , a.cgpa);
    return 0 ;
}