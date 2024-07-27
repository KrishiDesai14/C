#include<stdio.h>
int main () {


    int F,C;

    printf("\nEnter the tempreture in Fahrenheint=>");
    scanf("%d", &F);

    C = ((F-32)*5)/9;

    printf("The number in celsius is=> %d ", C);
}