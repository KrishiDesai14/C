#include<stdio.h>
int main () {

    int a[100]={44,11,22,33,55,66,77,88};
    int b[100];
    int i,n=8;
    int s=0,c=0;
    
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d ---- %d",a[i],b[i]);
    }
return 0;
}