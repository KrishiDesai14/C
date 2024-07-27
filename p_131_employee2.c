#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int salary;
    int number[4];
};
int main()
{
    struct employee e[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
    fflush(stdin);
    printf("\nEnter name =>");
    gets(e[i].name);

    printf("\nEnter salary =>");
    scanf("%d",&e[i].salary);

    fflush(stdin);
    printf("\nEnter number=>");
    scanf("%d",&e[i].number);

}
 
printf("\nMname\tsalary\tnumber");
printf("\n=======================");
for(i=0;i<n;i++)
{
    printf("\n%s\t%d\t%s", e[i].name,e[i].salary,e[i].number);
}

printf("\n=======================");

return 0;
}
