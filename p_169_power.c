#include<stdio.h>
int main () {

    int base, power;
    int i;
    int ans=1;

    printf("Enter base=>");
    scanf("%d", &base);

    printf("Enter Power=>");
    scanf("%d", &power);

    for(i=1;i<=power;i++)
{
    ans=ans*base;
}
printf("%d", ans);
}