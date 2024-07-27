#include<stdio.h>
int main() {

int i,n;

printf("\nEnter limit =>");
scanf("%d",&n);

for(i=1;i<=n;i=i+5)
{
    printf("\n%d",i);
}

return 0;
}