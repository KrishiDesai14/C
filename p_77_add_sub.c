#include<stdio.h>

void add(int num1, int num2)
{
    printf("\nAddition of two numbers are=> %d", num1+num2);
}
void sub(int num1,int num2)
{
    printf("\nSubtraction of two numbers are=> %d", num1-num2);
}
void mul(int num1, int num2)
{
    printf("\nMultiplication of two numbers are=> %d", num1*num2);
}
void div(int num1,int num2)
{
    printf("\nDivision of two numbers are=> %d", num1/num2);
}

int main () {

 int num1, num2;

    printf("\nEnter number one=>");
    scanf("%d", &num1);

    printf("\nEnter number two=>");
    scanf("%d", &num2);

   add(num1,num2);
   sub(num1,num2);
   mul(num1,num2);
   div(num1,num2);

   return 0; 
}