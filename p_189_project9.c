#include<stdio.h>
int main () {

int h,m;

printf("Enter minutes=>");
scanf("%d", &m);

h=m/60;
m=m%60;

printf("%d hours and %d minutes", h,m);

}