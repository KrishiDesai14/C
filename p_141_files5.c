#include<stdio.h>
#include<ctype.h>
int main () {

    char ch;
    FILE *f1;
    int c=0;

    f1=fopen("file1", "r");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if (isupper(ch))
    {
        printf("%c",tolower(ch));
    }
    else if(islower(ch))
    {
        printf("%c",toupper(ch));
    }
    else{
        printf("%c",ch);
    }
    fclose(f1);
    }
}