#include<stdio.h>
int main () {

    int a[100]={44,11,22,33,55,66,77,88};
    int i,n=8;
    int s=0,c=0;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d", a[i]);
        }
        else
        {
            printf("\nodd number");
        }
    }
return 0;
}