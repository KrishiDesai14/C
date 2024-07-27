#include<stdio.h>
int main(){

    int n1
    char op,o;

    printf("\nEnter 's' for square ");
    printf("\nEnter 'c' for cube ");
    printf("\nEnter option=>");
    scanf("%c", &o);

    switch(op)
    {
    case 's':
    case 'S':
        printf("\nEnter Number=>");
        scanf("%d",&n1);

        printf("\nThe square root of the number is=>", n1*n1);
        break;

    case 'c':
    case 'C':
        printf("\nEnter Number=>");
        scanf("%d", &n1);

        printf("\nThe cube root of the number is=>", n1*n1*n1);
        break;

    default:
        printf("\nWrong option");

    }
    return 0;
}