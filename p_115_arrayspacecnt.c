#include<stdio.h>
#include<string.h>

int main () {

char ch;
char name[100];
int n,i,c=0;

printf("\nEnter name=>");
gets(name);

n=strlen(name);


for(i=0;i<n;i++)
{
    ch=name[i];
    if(ch==' ')
    {
        c++;
    }
}

printf("\ntotal spaces are %d",c);

return 0;
}