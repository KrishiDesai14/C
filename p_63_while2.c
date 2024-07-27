#include<stdio.h>
int main() {

int i,n;

printf("\nEnter limit =>");
scanf("%d",&n);

i=1;
while(i<=n)
{
    printf("\n%d  %d",i, i*i);
    i++;
}

return 0;
}