#include<stdio.h>
int main () {

    int a[100]={11,22,33,44,55,66,77,88,99};
    int b[100];
    int i,n=9;
    int k=0;

    for(i=0;i<n;i++)
    {
        b[i]=a[i]*a[i];
    }
    for(i=0;i<k;i++)
    {
        printf("%d", b[i]);
    }

return 0;

}
