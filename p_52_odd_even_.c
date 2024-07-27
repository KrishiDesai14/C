#include<stdio.h>
int main(){

    int i,n;

    printf("\nEnter Limit=>");
    scanf("%d", &n);

    for(i=1;i<=n,i++)
    {
    if(i%2==0)
    {
        printf("\nEven number is=>%d",i);
    }
    else
    {
        printf("\nOdd number is=>%d",i);
    }
    }
return 0;

}