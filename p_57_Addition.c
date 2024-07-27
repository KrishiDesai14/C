#include<stdio.h>
int main () {

    int n, i, s=0;

    printf("\nEnter number=>");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
    if(i%2==0)
    {
        printf("%d + ", i*i);
        s=s+i*i;
    }
    else
    {
        printf("%d + ", i*i*i);
        s=s+i*i*i;
    }
    }
    printf("\nAddition=>%d",s);
    
return 0;

}
