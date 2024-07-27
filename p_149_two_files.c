#include<stdio.h>
int main () {


    char ch,ch1;
    FILE *f1, *f2 ,*f3;

    f1=fopen("file1","r");
    f2=fopen("file2","r");
    f3=fopen("file3","w");
   
    while(ch!=EOF)
        {
        ch=getc(f1);
        putc(ch,f3);
        }


    while(ch1!=EOF)
        {
        ch1=getc(f2);
        putc(ch1,f3);
        }

        printf("\nCopied");
}