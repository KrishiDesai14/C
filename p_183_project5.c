#include<stdio.h>
int main () {

    float age;

    printf("\nEnter age=>");
    scanf("%f", &age);

    if(age < 18)
    {
        printf("\nYour not eligible to vote");
    }
    else{
        printf("\nYour eligible to vote");
    }
    
 return  0;
}