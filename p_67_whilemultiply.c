#include<stdio.h>
int main () {

    int i,n,f=1;

    printf("\nEnter limit=>");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
        printf(" %d X ",i);
        f=f*i;
        i++;
    }
    
return 0;
}