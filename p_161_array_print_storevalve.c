#include<stdio.h>
int main () {

    int a[100];
    int i,n;

    printf("Enter limit=>");
    scanf("%d", &n);

for (i=0;i<n;i++)
{
    printf("\nEnter numbers=>");
    scanf("%d", &a[i]);
}

for(i=0;i<n;i++)
{
    printf("\n%d", a[i]);
}

}