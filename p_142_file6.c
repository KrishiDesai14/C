#include<stdio.h>
int main () {

    char ch;
    FILE *f1;
    int c=0;

    f1=fopen("file1", "r");
    
        while(ch!=EOF)
        {
        ch=getc(f1);
    
        if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
        }
        else
        {
           printf("%c", ch);
        } 
        }

}