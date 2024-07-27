#include<stdio.h>
int main () {

    int a[100] = {22,33,44,55,66};
    int b[100] = {33,44,55,66,77};
    int i, n=6;
    int s=0, c=0;

    for(i=0;i<=n;i++)
    {
        printf("/n%d", a[i]+ b[i]);

    }
    return 0;
    }