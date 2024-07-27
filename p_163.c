#include<stdio.h>
int main() {

    int a[100];
    int b[100];
    int c[100];
    int i,n;
    int k=0;

    printf("Enter limits=>");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter numbers=>");
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i]= a[i]*a[i];
        c[i]= a[i]*a[i]*a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d %d %d",a[i],b[i], c[i]);
    }

}