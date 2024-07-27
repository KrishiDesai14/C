#include<stdio.h>
int main(){

    int month;

    printf("\nEnter month=>");
    scanf("%d",&month);

    switch(month)
    {

        case 1:
            printf("\nJnaurayr");

        case 2:
            printf("\nfeburary");

        case 3:
            printf("\nMarch");
        
        case 4:
            printf("\nApril");
        
        case 5:
            printf("\nMay");
        
        case 6:
            printf("\nJune");
        
        case 7:
            printf("\nJuly");
        
        case 8:
            printf("\nAugust");
        
        case 9:
            printf("\nSeptember");
        
        case 10:
            printf("\nOctober");
        
        case 11:
            printf("\nNovember");

        case 12:
            printf("\nDecember");


        default:
            printf("\nWrong month");

    }

    return 0;

}