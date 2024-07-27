#include<stdio.h>
int main () {

    int op;
    int num1, num2;

do{
    printf("\nEnter 1 for Area of triangle=>");
    printf("\nEnter 2 for Area of circle=>");
    printf("\nEnter 3 for exit");
    printf("\nEnter option=>");
    scanf("\n%d", op);

    if(op==1)
{
    printf("\nEnter height =>");
    scanf("%d",&num1);

    printf("\nEnter base =>");
    scanf("%d",&num2);
    
    printf("\nArea of triangle = %d",num1*num2*0.5);
}
else if(op==2)
{
    printf("\nEnter R=>");
    scanf("%d", &num1);
  
     printf("\nArea of circle = %d", num1*num1*3.14);
}
else 
{
    printf("\nwrong option");
}
    }while(op!=3);


return 0;
}