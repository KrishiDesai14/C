#include<stdio.h>
int main () {

    char ch;
    char name[100];
    char i,n,c=0,l,v;

    printf("Enter number=>");
    gets(name);

    n=strlen(name);

    for(i=0;i<=n;i++)
    {
        ch=name[i];
        if(isupper(ch))
        {
           v++;
        }
        else if(islower(ch))
        {
            l++;
        }
    }

    printf("\nTotal upper case are=> %d", v);
    printf("\nTotal lower case are=> %d", l);
    
}