#include<stdio.h>
int main () {

    char letter;

    printf("Enter letter=>");
    scanf("%c", &letter);

    if(letter =='a' || letter =='e'|| letter =='i' || letter == 'o'|| letter =='u')
    {
        printf("\nIts a vowel");
    }
    else
    {
        printf("\nIts not a vowel");
    }
}