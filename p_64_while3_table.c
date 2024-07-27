#include<stdio.h>
int main() {

int i,n;

printf("\nEnter Number =>");
scanf("%d",&n);

i=1;
while(i<=n)
{
    printf("\n%d X %d = %d",n,i,n*i);
    i++;
}

return 0;
}