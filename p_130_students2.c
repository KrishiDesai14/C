#include<stdio.h>
#include<string.h>
struct students
{
    char name[20];
    int rollnumber;
    int marks1 [4];
    int marks2;

};
int main()
{
    struct students s[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
    fflush(stdin);
    printf("\nEnter student name =>");
    gets(s[i].name);

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
    printf("\n%s\t%d\t%s", s[i].name,s[i].rollnumber,s[i].marks1,s[i].marks2);
}

printf("\n=======================");

return 0;
}
