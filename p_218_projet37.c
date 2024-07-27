#include<stdio.h>
main()
{
    char ch;
    FILE *f1;

    f1=fopen("file1","r");

    while(ch!=EOF)
    {
        ch=getc(f1);
        printf("%c",ch);
    }

    fclose(f1);
}