#include<stdio.h>
int main () {

    char ch;
    FILE *f1, *f2,*f3;;

    f1=fopen("file1", "r");
    f2=fopen("file3","w");
    f3=fopen("file4","w");
    

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(ch==' ')
        {
            putc(ch,f2);
        }
        else
        {
            putc(ch,f3);
        }
        
         printf("\nCopied");
       
    }





}