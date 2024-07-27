#include<stdio.h>
#include<string.h>
int main () {

    char ch;
    char name[100];
    char i,n,c=0;

    printf("\nEnter name=>");
    gets(name);

    n=strlen(name);

    for(i=0;i<n;i++)
    {
        ch=name[i];
        if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
           printf("7", ch);
        }
        else
        {
            printf("%c", ch);
        }
    
    }
    
    return 0;

}



