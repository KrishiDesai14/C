#include<stdio.h>
int main () {

    int n1,n2;

    printf("\nEnter number one=>");
    scanf("%d", &n1);

    printf("\nEnter number two=>");
    scanf("%d", &n2);

    if(n1>n2)
    {
        printf("\nMultiplication of number is=> %d", n1*n2);
    }
    else
    {
        printf("\nDivision of the numbers is=>%d", n1/n2);
    }

}