#include<stdio.h>

int add(int num1, int num2, int num3, int num4)
{
    return num1+num2+num3+num4;
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main () {

    int num1, num2, num3, num4;
    int c;
    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 2=>");
    scanf("%d", &num2);

    printf("\nEnter number 3=>");
    scanf("%d", &num3);

    printf("\nEnter number 4=>");
    scanf("%d", &num4);

    c=add(num1, num2, num3, num4);

    printf("\nSum = %d",c);
    
    c=max(num1,num2);
    
    printf("\nMax = %d",c);
    
    return 0;
}