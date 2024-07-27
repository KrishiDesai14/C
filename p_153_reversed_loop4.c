#include<stdio.h>
int main () {

    int Num,rev_Num=0, remainder,c, f=0,i=0;

    printf("Enter the number reverse=>");
    scanf("%d", &Num);
    c=Num;
    while(Num!=0)
    {
        remainder = Num%10;
        
        f=1;
        for(i=1;i<=remainder;i++)
        {
            f=f*i;
        }
        
        rev_Num = rev_Num + f;
        Num=Num/10;
    }
    
    if(rev_Num==c)
    {
        printf("Its a krishna murthy number");
    }
    else
    {
        printf("\nIt's not a Krishna murthy number");
    }


}