#include<stdio.h>
int main () {

    int n1,n2,n3;

    printf("Enter number one=>");
    scanf("%d", &n1);

    printf("Enter number two");
    scanf("%d", &n2);

    printf("Enter number three");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3)
    {
        printf("%d is bigger", n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("%d is bigger", n2);
    }
    else if(n3>n1 && n3>n2)
    {
        printf("%d is bigger", n3);
    }
}