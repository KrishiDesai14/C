#include<stdio.h>
int main () {

    int num,rev_num=0,remainder,c,f=0,i=0;

    printf("\nEnter the number reversed=>");
    scanf("%d", &num);

    while(num!=0)
    {
        remainder = num%10;
        f=1;
        for(i=1;i<=remainder;i++)
        {
            f=f*i;
        }
        
        rev_num = rev_num + f;
        num=num/10;
    }

    if(rev_num==c)
    {
        printf("Its a krishna murthy number");
    }
    else
    {
        printf("\nIt's not a Krishna murthy number");
    }

}