#include<stdio.h>
int main(){
    char letter;
   
    printf("\nEnter letter=>");
    scanf("%c", &letter);

    if (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
    {
        printf("\nYeh it a vowel");
    }
    else
    { 
        printf("\nIts not a vowel");
    }
    return  0;

}
   

  


