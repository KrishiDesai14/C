#include<stdio.h>
int main () {

    int a,b,c;

    printf("\nEnter number 1=>");
    scanf("%d", &a);

    printf("\nEnter number 2=>");
    scanf("%d", &b);

    printf("Enter number 3=>");
    scanf("%d", &c);

    if(a>b && a>c)
    {
        printf("%d is bigger", a);
    }
    else if(b>a && b>c)
    {
        printf("%d is bigger", b);
    }
    else if (c>a && c>b)
    {
        printf("%d is bigger", c);
    }


return 0;


}