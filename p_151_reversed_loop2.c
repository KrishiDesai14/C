#include<stdio.h>
int main () {

    int Num,rev_Num=0, remainder,c;

    printf("Enter the number reverse=>");
    scanf("%d", &Num);
    c=Num;
    while(Num!=0)
    {
        remainder = Num%10;
        rev_Num = rev_Num*10 + remainder;
        Num = Num/10;
    }
    
    if(rev_Num==c)
    {
        printf("Its a palindrome");
    }
    else
    {
        printf("\nIt's not a plaindrome");
    }

    return 0;
}