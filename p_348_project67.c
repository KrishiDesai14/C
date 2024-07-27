#include<stdio.h>
int main () {

    int i,n;

    printf("Enter number=>");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
       if(i%2==0)
       {
        printf("Even number is=> %d", i);
       }
       else
       {
        printf("Odd number is=> %d", i);
        i++;
       }


    }
}
