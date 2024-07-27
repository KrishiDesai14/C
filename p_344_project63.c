#include<stdio.h>
int main () {

    int inttype;
    float floattype;
    char chartype;
    double doubletype;

    printf("Size of int: %zu bytes\n", sizeof(inttype));
    printf("size of float; %zu bytes\n", sizeof(floattype));
    printf("size of char; %zu bytes\n", sizeof(chartype));
    printf("size of double; %zu bytes\n", sizeof(doubletype));
}