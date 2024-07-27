#include<stdio.h>
int main() {

    int a,b;
    int *ptra, *ptrb;

    a=22;
    b=2;

    ptra=&a;
    ptrb=&b;

    printf("\nA=%d", *ptra + *ptrb);
    printf("\nA=%d", *ptra - *ptrb); 
    printf("\nA=%d", *ptra * *ptrb);
    printf("\nA=%d", *ptra / *ptrb);
   
}