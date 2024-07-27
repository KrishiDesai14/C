#include<stdio.h>
#include<string.h>
int main () {

    char name1[100], name2[100];

    printf("Enter name one=>");
    getsc(name1);

    printf("Enter name two=>");
    getsc(name2);

    strcpy (name1,name2);
    printf("\n name= %s", name1);

}