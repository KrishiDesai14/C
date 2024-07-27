#include<stdio.h>
int main () {

    int p,r,t,a;

    printf("\nEnter initial principal balance=>");
    scanf("%d", &p);

    printf("\nEnter annual intrest rate=>");
    scanf("%d", &r);

    printf("\nEnter time=>");
    scanf("%d", &t);

    a = (p*r*t)/100;


}