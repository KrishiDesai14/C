#include<stdio.h>
int main () {
    int n, i;

    printf("\nEnter Limit=>");
    scanf("%d", &n);

    i=1;
    do
    {
        printf("\n%d  %d", i, i*i );

        i++;
    }while(i<=n);

return 0;

}