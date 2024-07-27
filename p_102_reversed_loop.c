#include<stdio.h>
int main () {

    int a[100]={44,11,22,33,55,66,77,88};
    int i,n=8;
    int s=0,c=0;
    

    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
return 0;
}