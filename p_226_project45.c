#include<stdio.h>
int main () {


    char a;

    printf("Enter letter=>");
    scanf("%c", &a);

    if(a>=65 && a<=90)
    {
        printf("Its upper case");
    }
    else
    {
        printf("Its lower case");
    }
}