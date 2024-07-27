#include<stdio.h>
int main () {

    int a,b,c;

    printf("\nEnter value a=>");
    scanf("%d", &a);

    printf("\nEnter value b=>");
    scanf("%d", &b);

    c=a;
    a=b;
    b=c;

    printf("\nAfter swap a=%d b=%d", a,b);
}