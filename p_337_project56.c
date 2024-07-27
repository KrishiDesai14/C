#include<stdio.h>
int main () {

    int i,n,j;
    int k=0;

    printf("Enter number=>");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
         for(j=1;j<=i;j++)
        {
            printf(" ");
        }
         for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }

    }
    
}