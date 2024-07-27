#include<stdio.h>
int main () {

    int a[100]={21,14,55,66,77,88,99};
    int i,n=7;
    int s=0,c=0;
    
    for(i=0;i<n;i++)
{
    if(a[i]%7==0)
    {
        printf("\n%d", a[i]);
        c++;
        s=s+a[i];
    }
}
    printf("\nSum = %d Count = %d",s,c);

return 0;

}