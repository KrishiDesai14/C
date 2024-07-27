#include<stdio.h>
int main() {

    int a, *b;
    a= 20;
    b=&a;

    printf("\na=%d b=%d", a, *b);
    *b=50;
    printf("\na=%d b=%d", a, *b);
    a=70;
    printf("\na=%d b=%d", a, *b);
    *b=200;
    printf("\na=%d b=%d", a, *b);

}