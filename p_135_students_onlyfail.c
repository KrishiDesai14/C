#include<stdio.h>
#include<string.h>
struct students
{

    int rollnumber;
    int marks1 [4];
    int marks2;
    int total

};
int main()
{
    struct students s[100];
    int n,i,total,f=0;

    printf("\nEnter limit =>");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
    fflush(stdin);
    printf("\nEnter student roll number=>");
    scanf("%d",&s[i].rollnumber);

    printf("\nEnter English marks=>");
    scanf("%d",&s[i].marks1);

    fflush(stdin);
    printf("\nEnter Hindi marks=>");
    scanf("%d",&s[i].marks2);

}
 

printf("\nMname\trollnumber\tmarks1,\tmarks2");
printf("\n=======================");


for(i=0;i<n;i++)
{
    total=s[i].marks1+ s[i].marks2;
 
    if(total>50)
    {
    printf("\n%s\t%d\t%d\t%d\t%d\tfail",s[i].rollnumber,s[i].marks1,s[i].marks2,s[i].marks1+s[i].marks2);
    f++;
    }
    
 
}
printf("\n===============");

    printf("\nfail=>%d",f);
 

printf("\n=======================");

return 0;
}
