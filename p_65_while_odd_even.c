#include<stdio.h>
int main() {

int i,n;

printf("\nEnter Number =>");
scanf("%d",&n);

i=1;
while(i<=n)
{
    if(i%2==0)
    {
        printf("\nEven number is => %d", i);
    }
    else
    {
        printf("\nOdd number is=> %d", i);
        i++;
    }
    
}

return 0;
}