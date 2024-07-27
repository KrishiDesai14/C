#include<stdio.h>
int main () {

    float h,b;

    printf("Enter height=>");
    scanf("%d", &h);

    printf("Enter base=>");
    scanf("%f", &b);

    printf("Area of trinangle=> %.2f", h*b*0.5);
    
    return 0;
}