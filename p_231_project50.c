#include<stdio.h>
int main () {

    int i,n,j;
    

    printf("Enter number=>");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }

}