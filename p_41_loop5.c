#include<stdio.h>
int main() {

int i,n;

printf("\nEnter limit =>");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("\n%d --- %d",i,i*i);
}

return 0;
}