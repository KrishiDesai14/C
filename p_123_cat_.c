#include<stdio.h>
#include<string.h>
int main () {


    char name1[100], name2[100];

    printf("\nEnter name1=>");
    gets(name1);

    printf("\nEnter name2=>");
    gets(name2);

    strcat(name1,name2);
    printf("\nname = %s", name1);

}