#include<stdio.h>
int main(){
    char vowles;

    printf("\nEnter the charactor to know if its a vowle or not=>");
    scanf("%c", &vowles);

    switch(vowles)
    {
    case 's':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    
        printf("\nYeh it a vowel");
    break;
    default:
    
        printf("\nIts not a vowel");
    }
    return  0;
   
}