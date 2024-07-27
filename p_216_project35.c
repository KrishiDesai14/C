#include<stdio.h>
int main () {

   char ch;
    FILE *f1,*f2;
 
    f1=fopen("file1", "r");
    f2=fopen("file2","w");
        while(ch!=EOF)
        {
        ch=getc(f1);
        putc(ch,f2);
        }

        printf("\nCopied");
}