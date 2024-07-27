#include<stdio.h>
int main () {

int i,n,f=1;

printf("\nEnter limit =>");
scanf("%d",&n);

i=n;

  while(i>=1)
    {

i=n;

  while(i>=1)
    {
        printf(" %d X ",i);
        f=f*i;
        i--;
    }

printf("\nFact = %d",f);

return 0;
}
    }

