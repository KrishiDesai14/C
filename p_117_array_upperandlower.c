#include<stdio.h>
#include<string.h>
int main () {

    char ch;
    char name [100];
    char i,n,c=0,l,v;

    printf("\nEnter name=>");
    gets(name);

    n=strlen(name);

    for(i=0;i<n;i++)
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

      printf("\nTotal lowercase are=>%d", l);
      printf("\nTotal uppercase are=>%d", v);
return 0;

}