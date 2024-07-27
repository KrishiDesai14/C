#include<stdio.h>
int main(){
    
    int num1,num2;
    int op;

    printf("\nPress 1 for square");
    printf("\nPress 2 for cube");
    printf("\nPress =>");
    scanf("%d",&op);

    if(op==1)
    {
        printf("\nEnter Number1 =>");
        scanf("%d", &num1);
        printf("\nEnter Number2 =>");
        scanf("%d", &num2);
        
        printf("\nSquare Number is = %d", num1+num1);
    }
    else if(op==2)
    {
        printf("\nEnter Number1 =>");
        scanf("%d", &num2);
        printf("\nEnter Number2 =>");
        scanf("%d", &num2);

        printf("\nCube Number is = %d", num2*num2*num2);
    }
    else
    {
        printf("\nWrong opt");
    }
 return  0;
}   




























