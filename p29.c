#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char letter;
   
    printf("\nEnter letter=>");
    scanf("%c", &letter);

    if (isupper(letter))
    {
        printf("\n%c",tolower(letter));
    }
    else if(islower(letter))
    { 
        printf("\n%c",toupper(letter));
    }
    else
    {
        printf("\nother");
    }

    return  0;
}


   