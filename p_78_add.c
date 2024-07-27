
#include<stdio.h>

void add(int num1, int num2, int num3, int num4)
{
   printf("\nAddition of four numbers are=> %d",num1+num2+num3+num4);
}
int main () {

    int num1, num2, num3, num4;

    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 2=>");
    scanf("%d", &num2);

    printf("\nEnter number 3=>");
    scanf("%d", &num3);

    printf("\nEnter number 4=>");
    scanf("%d", &num4);

    add(num1, num2, num3, num4);

    return 0;
}