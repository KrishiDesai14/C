#include <stdio.h>
int main () {
    
    int a[100]={22,33,44,55,66,77,88,99};
    int b[100];
    int i,n=8;
    int k=0;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
             b[k]=a[i];
             k++;
        }

    }
    for(i=0;i<k;i++)
    {
        printf("\n%d",b[i]);
    }

return 0;
}




