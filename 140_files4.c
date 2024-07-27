#include<stdio.h>
int main() {

    char ch;
    FILE *f1;
    int c=0,v,l;

    f1=fopen("file1", "r");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(isupper(ch))
        {
            v++;
        }
        else if(islower(ch))
        {
            l++;
        }
    }
      fclose(f1);
      printf("\nTotal lowercase are=>%d", l);
      printf("\nTotal uppercase are=>%d", v);
    }



