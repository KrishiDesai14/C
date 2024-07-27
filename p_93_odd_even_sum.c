#include<stdio.h>
int main () {

    int a[100]={23,32,76,87,76,99,88};
    int i,n=7;
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
    
     printf("\nsum = %d Count = %d",s,c);
    
    
return 0;

}









