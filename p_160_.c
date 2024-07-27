#include<stdio.h>
#include<string.h>
int main () {
    int a,b,c;
    printf("\nenter no1 =>");
    scanf("%d",&a);
    printf("\nenter no2 =>");
    scanf("%d",&b);

    printf("\nA = %d B = %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nA = %d B = %d",a,b);
    
}