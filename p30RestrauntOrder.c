#include<stdio.h>
int main(){i
    int total,qty, total 1, total 2, total 3, total 4, total 5, grandtotal;
    char op;

    printf("\npress p for pizza(200)");
    printf("\npress m for panipuri(300)");
    printf("\npress o for pasta(400)");
    printf("\npress i for icecream(650");
    printf("\npress w for waffles(500)");
    printf("\nEnter a for all options");
    printf("\nEnter choice ->");
    scanf("%c",&op);

if(op=='p')
{
    printf("\nEnter quantity for pizza=");
    scanf("%d", &qty);

    total= qty*200;
    printf("\ntotal=%d", total);
}
    else if(op=='m')
{
    printf("\nEnter quantity for panipuri=");
    scanf("%d", &qty);

    total= qty*300;
    printf("%d", &qty);
}
    else if(op=='o')
{
     printf("\nEnter quantity for pasta=");
    scanf("%d", &qty);

    total= qty*400;
    printf("%d", &qty);
}
    else if(op=='i')
{
    printf("\nEnter quantity for icecream=");
    scanf("%d", &qty);

    total= qty*650;
    printf("%d", &qty);
}
    else if(op=='w')
{
    printf("\nEnter quantity for waffles=");
    scanf("%d", &qty);

    total= qty*500;
    printf("%d", &qty);
}
    else if(op=='a')
    {
        printf("\nEnter quantity for pizza=");
        scanf("%d", &q );

        total 1= q*200;
        printf("\n bill of pizza= %d", total 1);

        printf("\nEnter quantity for panipuri=");
        scanf("%d", &q );

        total 2= q*300;
        printf("\n bill of panipuri= %d", total 2);

        printf("\nEnter quantity for pasta=");
        scanf("%d", &q );

        total 3= q*300;
        printf("\n bill of pasta= %d", total 3);

        printf("\nEnter quantity for icecream=");
        scanf("%d", &q );

        total 4= q*300;
        printf("\n bill of icecream= %d", total 4);

        printf("\nEnter quantity for waffles=");
        scanf("%d", &q );

        total 5= q*500;
        printf("\n bill of waffles= %d", total 5);

        grandtotal= total 1, total 2, total 3, total 4, total 5;
        printf("\nGrandtotal = %d", grandtotal);
    }
    
    else
    {
        printf("\nWrong opt");
    }
return 0;

 }
int total,qty,total 1, total 2, total 3, total 4, total 5, grandtotal;
    char op;

    printf("\npress p for pizza(200)");
    printf("\npress m for panipuri(300)");
    printf("\npress o for pasta(400)");
    printf("\npress i for icecream(650");
    printf("\npress w for waffles(500)");
    printf("\nEnter a for all options");
    printf("\nEnter choice ->");
    scanf("%c",&op);
