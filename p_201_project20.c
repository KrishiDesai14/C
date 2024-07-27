#include<stdio.h>
int main () {

    int num,n,i;

    printf("\nEnter number=>");
    scanf("%d", &num);

    for(i=1;i<=n;i++)
{
    if(i%2==0)
    {
    printf("\n Even number is =>%d",i);
    }
    else 
    {
    printf("\n Odd number is =>%d",i);
    }
}

return 0;
}
