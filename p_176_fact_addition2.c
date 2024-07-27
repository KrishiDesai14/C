#include<stdio.h>
int main() {

    int i,n,f=1;

    printf("Enter number=>");
    scanf("%d", n);

    for(i=1;i<=n;i++)
    {
        printf("%d + ", i);
        f=f+i;
    }

    printf("\nAddition is = %d", f);

}