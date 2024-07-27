#include<stdio.h>
int main(){
    
    float price;

    printf("\nEnter price=>");
    scanf("%f", &price); 

    if(price > 500)
    {
        printf("\nPizza");
    }
    else{
        printf("\npanipuri");
    }
    
 return  0;
}