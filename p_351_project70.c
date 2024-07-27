#include<stdio.h>
int main () {

    char ch;
    FILE *f1,*f2;

    f1=fopen("file1", "r");
    f2=fopen("file2", "w");

    while(ch!=EOF)
    {
        ch=getsc(f1);

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {

        }
        else
        {
              putc(ch,f2);
        }
        printf("copied");
        
    }
}