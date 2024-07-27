#include<stdio.h>
#include<string.h>

int main () {

char name[100];
int n;

printf("\nEnter name=>");
gets(name);

printf("\n%s", name);
n=strlen(name);

printf("\nLength = %d",n);

return 0;
}