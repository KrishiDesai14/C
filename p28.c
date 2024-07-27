#include<stdio.h>
int main(){
    char letter;
   
    printf("\nEnter letter=>");
    scanf("%c", &letter);

    if (isupper(letter))
    {
        printf("\nYeh its a upper letter");
    }
    else if(islower(letter))
    { 
        printf("\nIts a lower letter");
    }
    else
    {
        printf("\nother");
    }

    return  0;
}


   