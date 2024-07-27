#include<stdio.h>
int main () {

    int Num,rev_Num=0, remainder,c;

    printf("Enter the number reverse=>");
    scanf("%d", &Num);
    c=Num;
    while(Num!=0)
    {
        remainder = Num%10;
        
    }
    
    if(rev_Num==c)
    {
        printf("Its a Armstrong number");
    }
    else
    {
        printf("\nIt's not a Armstrong number");
    }

    return 0;
}