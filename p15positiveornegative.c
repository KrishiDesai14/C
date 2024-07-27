#include<stdio.h>
int main(){
    
    float nos;

    printf("\nEnter number=>");
    scanf("%f", &nos);

    if(nos > 0)
    {
        printf("\nIts a greater number");
    }
    else{
        printf("\nIts a negative number");
    }
    
 return  0;
}