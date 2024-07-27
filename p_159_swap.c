#include<stdio.h>
#include<string.h>
int main () {
    int a,b;
    printf("\nenter no1 =>");
    scanf("%d",&a);
    printf("\nenter no2 =>");
    scanf("%d",&b);

    printf("\nA = %d B = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b; 
    printf("\nA = %d B = %d",a,b);
    
}