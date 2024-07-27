#include<stdio.h>
int main () {

    char  name, age, city, code;

    printf("Enter name=>");
    scanf("%c", &name);

    printf("\nEnter age=>");
    scanf("%c", &age);

    printf("\nEnter city=>");
    scanf("c", &city);

    printf("Enter code=>");
    scanf("%c", &code);

    if(code =='D')
    {
        printf("15");
    }
    else if (code =='R')
    {
        printf("20");
    }
    else if(code == 'W')
    {
        printf("30");
    }
    else if(code == 'C')
    {
        printf("40");
    }

}