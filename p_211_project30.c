#include<stdio.h>
int main () {

    int a[1000];

    printf("Enter number one=>");
    scanf("%d", &a[0]);

    printf("Enter number two=>");
    scanf("%d", &a[1]);

    printf("Total= %d", a[0]+a[1]);

}