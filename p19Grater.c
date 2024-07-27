#include<stdio.h>
int main(){
    
    float nos1, nos2;

    printf("\nEnter number one=>");
    scanf("%f", &nos1);

    printf("\nEnter number two=>");
    scanf("%f", &nos2);

    if(nos1>nos2)
    {
        printf("\n%d is greater",nos1)
    }
    else if(nos2>nos1)
    {
        
    }
    else{
        printf("\nBoth are equal");
    }
    
    
 return  0;
}