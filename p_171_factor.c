#include<stdio.h>
int main() {

    int i,n,f=1;

    printf("Enter number=>");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf(" %d X ",i);
        f=f*i;
    }
printf("Fact=> %d", f); 




        