#include<stdio.h>
int main () {

    int n1,n2,n3,n4,n5;

    printf("Enter marks one=>");
    scanf("%d", &n1);

    printf("Enter marks two=>");
    scanf("%d", &n2);

    printf("Enter marks three=>");
    scanf("%d", &n3);

    printf("Enter marks four=>");
    scanf("%d", &n4);

    printf("Enter marks five=>");
    scanf("%d", &n5);

    printf("Total marks=> %d, Average marks=> %d", n1+n2+n3+n4+n5, n1+n2+n3+n4+n5/5);


}