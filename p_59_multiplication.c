#include<stdio.h>
int main () {

    int n, i, s=0;

    printf("\nEnter Number=>");
    scanf("%d", &n);

    for (i=n;i>=1;i--)
    {
    printf("%d X ",i);
    }

    return 0; 
}