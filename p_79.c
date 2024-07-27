#include<stdio.h>

void add(int num1, int num2)
{
   printf("\nAddition of four numbers are=> %d",num1+num2);
}
void max(int num1,int num2)
{
   if(num1 > num2)
    {
        printf("\nNumber 1 is greater");
    }
    else{
        printf("\nNumber 2 is greater");
    }
   
}
void cube(int num1)
{
    printf("\nCube root of the number is=>%d", num1*num1*num1);
}

int main () {

    int num1, num2;

    printf("\nEnter number 1=>");
    scanf("%d", &num1);

    printf("\nEnter number 2=>");
    scanf("%d", &num2);

    add(num1, num2);
    max(num1,num2);
    cube(num1);
    
    return 0;
}