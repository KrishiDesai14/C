
#include<stdio.h>
int main () {

    int n, i, s=0;

    printf("\nEnter Number=>");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d +", i);
        s=s+i;
    }
    printf("\nSum=%d", s);

return 0;
}