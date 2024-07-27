#include<stdio.h>
main()
{
    char ch;
    FILE *f1;
    int c=0;

    f1=fopen("file1","r");

    while(ch!=EOF)
    {
        ch=getc(f1);
    
        if(ch==' ')
        {
            c++;
        }
       
   
    }

    fclose(f1);
    printf("\nTotal spaces are %d",c);
}
