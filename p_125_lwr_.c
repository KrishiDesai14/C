#include<stdio.h>
#include<string.h>
int main () {


    char name1[100];

    printf("\nEnter name1=>");
    gets(name1);


    strlwr(name1);
    printf("\n%s", strlwr(name1));

}