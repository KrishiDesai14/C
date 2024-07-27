#include<stdio.h>

main()
{
int a[100];
int i,n,s=0;

printf("\nEnter limit=>");
scanf("%d", &n);

for (i=0;i<n;i++)
{
    printf("\nEnter value of a[%d]=>",i);
    scanf("%d", &a[i]);
}

printf("\nValues");
for(i=0;i<n;i++)
{
    printf("\n%d", a[i]);
    s=s+a[i];
}

printf("\nSum = %d",s);
}





    