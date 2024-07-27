#include<stdio.h>
#include<string.h>
int main () {
    char ch;
    char name[100];
    char i,n,c=0;

    printf("\nEnter name=>");
    gets(name);

    n=strlen(name);

    for(i=n-1;i>=0;i--)
    {
        ch=name[i];
        printf("%c",ch);
    }
    return 0;
}
    