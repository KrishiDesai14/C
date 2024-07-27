#include<stdio.h>
int main () {

    int a[100];
    int b[100];
    int i,n,g;

    printf("Enter limit=>");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter Numbers=>");
        scanf("%d", &a[i]);

    }

     printf("Enter greater than value=>");
        scanf("%d", &g);
 
    for(i=0;i<n;i++)
    {
        if(g>a[i])
        {
            printf("\n%d", a[i]);
        }

    }


  
}