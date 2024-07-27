#include<stdio.h>
int main () {

    int i,n;

    printf("Enter number=>");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(i=1;i<=i;i++)
        {
          printf(" i ");  
        }
        printf("\n %d ");
    }
}