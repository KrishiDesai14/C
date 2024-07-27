#include<stdio.h>
int main () {

    int a[100]={11,22,33,44,55,66,77,88,99};
    int i, n=9;
    int s=0,c=0;
    int s1=0,c1=0;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\nEven number is=>%d",a[i]);
            c++;
            s=s+a[i];
        }
        else
        {
            printf("\nOdd number is=>%d", a[i]);
            c1++;
            s=s+a[i];
        }
    }

    printf("\nsum =%d count=%d", s,c);
    return 0;


}