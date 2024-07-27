#include<stdio.h>
int main() {

    int a[100]={1890,20,9,70,4,30,15,9};
    int i,n=8;
    int c=0,s=0;
 

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
    {
        printf("\nEven number is=>%d", a[i]);
        c++;
        s=s+a[i];
    }
    }

    printf("\nSum = %d Count = %d",s,c);

    return 0;
}



