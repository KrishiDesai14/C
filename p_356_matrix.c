#include<stdio.h>
#define N 3
int main () {

    int a[N][N];
    int b[N][N];
    int i,j;

    for(i=0;i<=N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter value of A =>");
            scanf("%d", &a[i][j]);
        }

    }

for(i=0;i<=N;i++)
    {
 for(j=0;j<N;j++)
        {
            printf("Enter value of B =>");
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nValues\n");
    for(i=0;i<=N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ", a[i][j]+ b[i][j]);
        }
        printf("\n");
    }
    return 0;
}