#include<stdio.h>
int main () {

    int i,n,j;
    int k=1;

    printf("Enter number=>");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=n;j>=i;j--)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
}


