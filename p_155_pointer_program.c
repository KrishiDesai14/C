#include<stdio.h>
int main () {

   int a;
   int b;

   a=5;
   b=a;

   printf("\n a=%d b=%d", a,b);
   b=50;
   printf("\n a=%d b=%d", a,b);
   a= 100;
   printf("\n a=%d b=%d", a,b);
   b=200;
   printf("\n a=%d b=%d", a,b);

}