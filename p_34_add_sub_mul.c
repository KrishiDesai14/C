#include<stdio.h>
int main(){

    int op,n1,n2;

    printf("\nPress 1 for addition");
    printf("\npress 2 for subtraction");
    printf("\npress 3 for multiplication");
    printf("\npress 4 for division");

    printf("\nEnter =>");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("\nEnter Number 1=>");
            scanf("%d", n1);

            printf("\nEnter Number 2=>");
            scanf("%d", n2);

            printf("\nThe sun of both numbers are=>", n1+n2);
            break;

        case 2:
            printf("\nEnter Number 1=>");
            scanf("%d", n1);

            printf("\nEnter Number 2 =>");
            scanf("%d", n2);

            printf("\nThe subtraction of both the numbers are=>", n1-n2);
            break;

        case 3:
            printf("\nEnter Number 1=>");
            scanf("%d", n1);

            printf("\nEnter number 2=>");
            scanf("%d", n2);

            printf("\nTHe Multiplication of both the Numbers are=>", n1*n2);
            break;

        case 4:
            printf("\nEnter number 1=>");
            scanf("%d", n1);

            printf("\nEnter Number 2=>");
            scanf("%d", n2);

            printf("\nThe division of both the numbers are=>", n1/n2);
            break;

        case 5:
            default:
            printf("\nWrong week");    
    }
return 0;

}