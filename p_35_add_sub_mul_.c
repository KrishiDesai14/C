#include<stdio.h>
int main(){

    int n1,n2;
    char op;

    printf("\nPress + for addition");
    printf("\npress - for subtraction");
    printf("\npress * for multiplication");
    printf("\npress / for division");

    printf("\nEnter =>");
    scanf("%c",&op);

    switch(op)
    {
        case '+':
            printf("\nEnter Number 1=>");
            scanf("%d", &n1);

            printf("\nEnter Number 2=>");
            scanf("%d", &n2);

            printf("\nThe sun of both numbers are=>", n1+n2);
            break;

        case '-':
            printf("\nEnter Number 1=>");
            scanf("%d", &n1);

            printf("\nEnter Number 2 =>");
            scanf("%d", &n2);

            printf("\nThe subtraction of both the numbers are=>", n1-n2);
            break;

        case '/':
            printf("\nEnter Number 1=>");
            scanf("%d", &n1);

            printf("\nEnter number 2=>");
            scanf("%d", &n2);

            printf("\nTHe Multiplication of both the Numbers are=>", n1*n2);
            break;

        case '*':
            printf("\nEnter number 1=>");
            scanf("%d", &n1);

            printf("\nEnter Number 2=>");
            scanf("%d", &n2);

            printf("\nThe division of both the numbers are=>", n1/n2);
            break;

        default:
            printf("\nWrong week");    
    }
return 0;

}