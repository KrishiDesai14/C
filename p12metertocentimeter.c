#include<stdio.h>
int main(){

    float meter;

    printf("\nEnter meter=>");
    scan("%f",&meter)

    printf("\nCentimeter is = %.2f", meter*100)
    
    return  0;
}