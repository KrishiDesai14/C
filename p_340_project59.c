#include<stdio.h>
int main () {

    int n, i, k, c = 1, j;
 
    printf("\nEnter number=>");
    scanf("%d", &n);
    c = n - 1;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= c; i++)
            printf(" ");
            c--;
        
            
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");


        printf("\n");

        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf(" * ");
        }
        printf("\n");
     }
}