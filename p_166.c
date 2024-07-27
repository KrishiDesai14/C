#include<stdio.h>
int main () {


   int n1, n2, n3;

    printf("\nEnter number one=>");
    scanf("%d", &n1);

    printf("\nEnter number two=>");
    scanf("%d", &n2);

    printf("\nEnter number three=>");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3)
    {
        printf("\n%d is greater",n1);
    }
    else if(n2> n1 && n2>n3)
    {
        printf("%d is greater", n2);
    }
    else if(n3> n1 && n3>n2)
    {
        printf("%d is greater", n3);
    }
    
    
 return  0;
} 



