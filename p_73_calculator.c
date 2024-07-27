#include<stdio.h>
int main () {

    int op;
    int num1, num2;

    do{

    printf("\nEnter 1 for addition");
    printf("\nEnter 2 for subtraction");
    printf("\nEnter 3 for multiplication");
    printf("\nEnter 4 for division"); 
    printf("\nEnter 5 for exit");
    printf("\nEnter option=>");
    scanf("\n%d", &op);

    if(op==1)
    {
    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nThe sum of two numbers are=>", num1+num2);
    }
    else if (op==2)
    {
    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nThe sum of two numbers are=>", num1-num2);
    }
    else if(op==3)
    {
    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nThe sum of two numbers are=>", num1*num2);  
    }
    else if(op==4)
    {
    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nThe sum of two numbers are=>", num1/num2);  
    }
    else if(op==5)
    {
        printf("\nBye");
    }
    else
    {
        printf("\nWrong option");
    }
    
    }while(op!=5);
    return 0;

}