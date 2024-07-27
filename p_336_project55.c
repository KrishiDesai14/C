#include<stdio.h>
int main () {

    int i,n,j;
    int k=1;

    printf("Enter number=>");
    scanf("%d", n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
    }
    for(i=1;i<=n;i++)
    {
        i=n;
        for(j=n;j>=i;j++)
        {
            printf("%d", i);
            k++;
        }
        printf("\n");
    }
}
