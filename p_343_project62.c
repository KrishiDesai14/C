#include<stdio.h>
int main () {

    char letter;

    prinrf("Enter letter =>");
    scanf("%c", &letter);

    if(isupper(letter))
    {
        printf("yeh, its a uppercase letter");
    }
    else if(islower(letter))
    {
        printf("its a lower case letter");
    }
    else
    {
        printf("not a letter");
    }
}