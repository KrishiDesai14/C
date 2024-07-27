#include<stdio.h>
#include<string.h>
struct students
{

    int rollnumber;
    int marks1 [4];
    int marks2;
    int total;
    int record;

};
int main()
{
    struct students s[100];
    int n,i,total,p=0,f=0,record=0,y;

    printf("\nEnter limit =>");
    scanf("%d",&n);

for(i=0;i<n;i++)
{

    printf("\nEnter student roll number=>");
    scanf("%d",&s[i].rollnumber);

    printf("\nEnter English marks=>");
    scanf("%d",&s[i].marks1);

    printf("\nEnter Hindi marks=>");
    scanf("%d",&s[i].marks2);

}
    
printf("\nEnter no to search =>");
scanf("%d",&y);


for(i=0;i<n;i++)
{
if(y==s[i].rollnumber)
{
    record=1;
    total=s[i].marks1+ s[i].marks2;
printf("\nMname\trollnumber\tmarks1,\tmarks2");
printf("\n=======================");

 
    if(total>50)
    {
    printf("\n%s\t%d\t%d\t%d\t%d\tpass",s[i].rollnumber,s[i].marks1,s[i].marks2,s[i].marks1+s[i].marks2);
    p++;
    }
    else
    {
   printf("\n%s\t%d\t%d\t%d\t%d\tfail",s[i].rollnumber,s[i].marks1,s[i].marks2,s[i].marks1+s[i].marks2);
   f++;
    }
}

}
if(record==0)
{
    printf("\nsorry no record");
}

return 0;
}
