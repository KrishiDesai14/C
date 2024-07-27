#include<stdio.h>

void add()
{
    int num1,num2;

    printf("\nEnter number one=>");
    scanf("%d", &num1);

    printf("\nEnter number two=>");
    scanf("%d", &num2);

    printf("\nAddition of two numbers are=> %d", num1+num2);

}

void cube()
{

   int num1;

   printf("\nEnter number=>");
   scanf("%d", &num1);

   printf("\nCube of the number is=>%d", num1*num1*num1);

}

void table()
{
   int i, n;

   printf("\nEnter number=>");
   scanf("%d", &n); 

   printf("\n%d X %d = %d", n, i, n*i);
}

void oddeven()
{
    int i,n;

printf("\nEnter Number =>");
scanf("%d",&n);

i=1;
while(i<=n)
{
    if(i%2==0)
    {
        printf("\nEven number is => %d", i);
    }
    else
    {
        printf("\nOdd number is=> %d", i);
        i++;
    }
}

}

void areaoftriangle()
{
    float h,b;

    h=100.10;
    b=200;

    printf("\nArea of triangle = %.2f",h*b*0.5);

}

void areaofcircle()
{
    float r;
    
    printf("\nEnterR=>");
    scan("%f", &r);
  
     printf("\nArea of circle = %.2f", r*r*3.14);
    
 return  0;
}

void fact()
{
    int i,n,f=1;

printf("\nEnter limit =>");
scanf("%d",&n);

i=n;

  while(i>=1)
    {
        printf(" %d X ",i);
        f=f*i;
        i--;
    }

printf("\nFact = %d",f);

return 0;
}

void square()

{
    int num1;

   printf("\nEnter number=>");
   scanf("%d", &num1);

   printf("\nCube of the number is=>%d", num1*num1);

}

int main () {


add();
square();
fact();
areaofcircle();
areaoftriangle();
oddeven();

return 0;

}