#include<stdio.h>
int main(){
     int num1,num2,num3,num4;
     int op;

     printf("\npress 1 for addition");
     printf("\npress 2 for subtraction");
     printf("\npress 3 for multiplication");
     printf("\npress 4 for division");

     if(op==1)
     {
        printf("\nEnter Number 1=>");
        scanf("%d", &num1)
        printf("\nEnter Number 2==>");
        scanf("%d", &num2)

        printf("\n Addition of number is= %d", num1+num1)
     }
     else if(op==2)
     {
        printf("\nEnter Number 1==>");
        scanf("%d", &num1)
        printf("\nEnter Number 2==>");
        scanf("%d", &num2)

        printf("\n Subtraction of number is= %d", num1-num1)
        
     }
     else
     {
        printf("\nEnter Number 1==>");
        scanf("%d", &num1)
        printf("\nEnter Number 2==>");
        scanf("%d", &num2)

        printf("\n Multiplication of number is= %d", num1*num1)
     }
     else
     {
        printf("\nEnter Number 1==>");
        scanf("%d", &num1)
        printf("\nEnter Number 2==>");
        scanf("%d", &num2)

        printf("\n Division of number is= %d", num1/num1)
     }
 else
    {
        printf("\nWrong opt");
    }
     
    return  0;
    
}




