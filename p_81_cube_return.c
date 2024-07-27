#include<stdio.h>

int cube(int num1 )
{
    return num1*num1*num1;
}
int main () {
    int num1;
    int c;

    printf("\nEnter number=>");
    scanf("%d", &num1);

    c=cube(num1);

    printf("\nCube=%d", c);
    

return 0;
}