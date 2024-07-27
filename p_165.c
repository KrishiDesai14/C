#include<stdio.h>
int main () {


   int n1, n2;

    printf("\nEnter number one=>");
    scanf("%d", &n1);

    printf("\nEnter number two=>");
    scanf("%d", &n2);

    if(n1>n2)
    {
        printf("\n%d is greater",n1);
    }
    else if(n1<n2)
    {
        printf("%d is greater", n2);
    }

    
 return  0;
} 



