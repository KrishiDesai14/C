#include<stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    int salary;
    int number[4];

};
main()
{
    struct employee m1,m2,m3;

    printf("\nEnter employee name =>");
    gets(m1.name);

    printf("\nEnter employee salary=>");
    scanf("%d",&m1.salary);

    fflush(stdin);
    printf("\nEnter employee number=>");
    scanf("%d",&m1.number);

    printf("\nEnter employee name =>");
    gets(m2.name);

    printf("\nEnter employee salary=>");
    scanf("%d",&m2.salary);

    fflush(stdin);
    printf("\nEnter employee number=>");
    scanf("%d",&m2.number);

    printf("\nEnter employee name =>");
    gets(m3.name);

    printf("\nEnter employee salary=>");
    scanf("%d",&m3.salary);

    fflush(stdin);
    printf("\nEnter employee number=>");
    scanf("%d",&m3.number);


    printf("\nemployee name = %s employee salary = %d employee number = %s", m1.name,m1.salary,m1.number);
    printf("\nemployee name = %s employee salary = %d employee number = %s", m2.name,m2.salary,m2.number);
    printf("\nemployee name = %s employee salary = %d employee number = %s", m3.name,m3.salary,m3.number);
    
}