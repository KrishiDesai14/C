#include<stdio.h>
int main () {

    int op;
    int num;

do{


    printf("\nPress 1 for square=>");
    printf("\nPress 2 for cube=>");
    printf("\nPress 3 for exit=>");
    printf("\nEnter =>");
    
    scanf("%d", &op);

    if(op==1)
    {
    printf("\nEnter number=>");
    scanf("\n%d", &num);

    printf("\nThe square of the number is=> %d", num * num);
    }
    else if(op==2)
    {
    printf("\nEnter number=>");
    scanf("\n%d", &num);

    printf("\nThe cube of the number is=> %d", num * num * num);
    }
    else if(op==3)
    {
        printf("\nBye");
    }
    else
    {
        printf("\nWrong oipt");
    }



}