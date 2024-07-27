#include<stdio.h>
int main(){

    char op;
    int pages, print;
    printf("\npress p for printing");
    printf("\npress x for xeros");
    printf("\nEnter choice=>");
    scanf("%c", &op);

    if(op=='x')
    {
    printf("\nEnter number of pages want to xeros=>");
    scanf("%d",&pages);

        if(pages>50)
        {
            printf("\nYour bill is %d",pages*3);
        }
        else
        {
            printf("\nYour bill is %d",pages*4);
        }

    }
    else if(op=='p')
    {
        printf("\nEnter number of pages want to print=>");
        scanf("%d", &print);

        if(print>50)
        {
            printf("\nYour bill is %d", print*20);
        }
        else
        {
            printf("\nyour bill is %d", print*40)
        }
    }

    else{
            printf("\nWrong opt");
    }
 
return 0;
}