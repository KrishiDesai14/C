#include<stdio.h>
int main () {

    int n1,n2,n3,n4;

    printf("Enter number one=>");
    scanf("%d", &n1);

    printf("Enter number two=>");
    scanf("%d", &n2);

    printf("Enter number three=>");
    scanf("%d", &n3);

    printf("Enter number four=>");
    scanf("%d", &n4);

    if(n1>n2 && n1>n3 && n1>n4)
    {
        printf("\n%d is greater",n1);
    }
    else if(n2> n1 && n2>n3 && n2>n4)
    {
        printf("%d is greater", n2);
    }
    else if(n3> n1 && n3>n2 && n3>n4)
    {
        printf("%d is greater", n3);
    }
    else if(n4> n1 && n4>n2 && n4>n3)
    {
        printf("%d is greater", n4);
    }
    
    
 return  0;


}