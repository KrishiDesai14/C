#include<stdio.h>
int main () {

    int Num,rev_Num=0, remainder,c;

    printf("Enter the number reverse=>");
    scanf("%d", &Num);
    c=Num;
    while(Num!=0)
    {
        remainder = Num%10;
        rev_Num = rev_Num +  remainder;
        Num = Num/10;
    }

    printf("The sum of the number is=>%d", rev_Num);


    return 0;
}