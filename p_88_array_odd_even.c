#include<stdio.h>
int main () {
    int a[100];
    int i,n=5;

    printf("\nEnter limit=>");
scanf("%d", &n);


    for(i=0;i<n;i++)
    {
    printf("\nEnter value=>");
    scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
    {
        printf("\nEven number is=>%d", a[i]);
    }
    else 
    {
        printf("\nOdd number is=>%d", a[i]);
    }
    }

    return 0;
}