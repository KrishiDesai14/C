#include<stdio.h>
int main () {

    char op;
    int num1, num2;

do{
    printf("\nEnter T for Area of triangle=>");
    printf("\nEnter c for Area of circle=>");
    printf("\nEnter e for exit");
    printf("\nEnter option=>");
    scanf("%c",&op);

    if(op=='T')
{
    printf("\nEnter height =>");
    scanf("%d",&num1);

    printf("\nEnter base =>");
    scanf("%d",&num2);
    
    printf("\nArea of triangle = %d",num1*num2*0.5);
}
else if(op=='c')
{
    printf("\nEnter R=>");
    scanf("%d", &num1);
  
     printf("\nArea of circle = %d", num1*num1*3.14);
}
else if(op=='e')
{
    prinff("\nbye");
}
else 
{
    printf("\nwrong option");
}
    }while(op!='e');

return 0;
}