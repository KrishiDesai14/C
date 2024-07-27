#include<stdio.h>
int main () {

    int a[100]= {11,22,33,44};
    int b[100]= {55,66,77,88};
    int c[100];
    int i, n=4;
    int k=0;

    for (i=0;i<n;i++)
    {
       c[k]= a[i];
       k++;
    }

    for (i=0;i<n;i++)
    {
        c[k]=b[i];
        k++;
    }

    for (i=0;i<k;i++)
    {
        printf("\n%d",c[i]);
    }

return 0;


}