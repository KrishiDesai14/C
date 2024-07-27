#include<stdio.h>
int main () {

    char name, class, city, percentage;

    printf("Enter students name=>");
    scanf("%c", name);

    printf("\nEnters students class=>");
    scanf("%c", class);

    printf("\nEnters students city=>");
    scanf("%c", city);

    printf("\nEnter students percentage=>");
    scanf("%c", percentage);

    if(percentage=='80 - 100')
    {
        printf("A");
    }
    else if(percentage == '65 - 79')
    {
        printf("B");
    }
    else if(percentage == '50 - 64')
    {
        printf("c");
    } 
    else if(percentage == '40 - 49')
    {
        printf("D");
    }
    else if(percentage < 40)
    {
        printf("E");
    }

return 0;


}