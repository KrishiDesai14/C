#include<stdio.h>
int main(){
     int r,h,b;
     int no1,no2;
     int op;

     printf("\npress 1 for Area of circle");
     printf("\npress 2 for Area of triangle");
     printf("\npress 3 to find out which number is greater");
     
     if(op==1)
     {
        printf("\nEnter Number=>");
        scanf("%d", &r)
  
        printf("\nArea of circle = %.2f", r*r*3.14);
         
     }
     else if(op==2)
     {
        printf("\nEnter height =>");
        scanf("%d",&h);

        printf("\nEnter base =>");
        scanf("%d",&b);
    
        printf("\nArea of triangle = %.2f",h*b*0.5);
     }
     else (op==3)
     {
        printf("\nEnter number 1 =>");
        scanf("%d",&num1);

        printf("\nEnter number 2 =>");
        scanf("%d",&num2);
        if(num1)
    
     }
     else
     {

     }
    return  0;
    
}