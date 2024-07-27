#include<stdio.h>
#include<string.h>

int main () {

char ch;
char name[100];
int n,i;

printf("\nEnter name=>");
gets(name);

n=strlen(name);


for(i=0;i<n;i++)
{
    ch=name[i];
    printf("\n%c",ch);
}

return 0;
}