#include<stdio.h>
int main () {

   int a[5]={22,33,44,55,66};
    int i,n=5;
    int s=0,c=0;
        int *ptr;
        ptr=a;
    for(i=0;i<n;i++)
        {
        printf("\n%d", *ptr);
        ptr++;
        }
}