#include<stdio.h>
#include<string.h>
int main() {

    int num[100];
    int i,n,c=0;

    printf("Enter number=>");
    gets(num);

    n=strlen(num);

    for(i=n-1;i>=0;i--)
    {
        num[i];
        printf("%d",num);
    }
    return 0;


}