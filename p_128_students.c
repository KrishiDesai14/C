#include<stdio.h>
#include<string.h>
struct students
{
    char name[20];
    int rollnumber;
    int marks1 [4];
    int marks2;

};
main()
{
    struct students m1,m2,m3,m4;

    printf("\nEnter student name =>");
    gets(m1.name);

    printf("\nEnter student roll number=>");
    scanf("%d",&m1.rollnumber);

    printf("\nEnter English marks=>");
    scanf("%d",&m1.marks1);

    printf("\nEnter Hindi marks=>");
    scanf("%d",&m1.marks2);

    printf("\nEnter student name =>");
    gets(m2.name);

    printf("\nEnter student roll number=>");
    scanf("%d",&m2.rollnumber);

    printf("\nEnter English marks=>");
    scanf("%d",&m2.marks1);

    printf("\nEnter Hindi marks=>");
    scanf("%d",&m2.marks2);

    printf("\nEnter student name =>");
    gets(m3.name);

    printf("\nEnter student roll number=>");
    scanf("%d",&m3.rollnumber);

    printf("\nEnter English marks=>");
    scanf("%d",&m3.marks1);

    printf("\nEnter Hindi marks=>");
    scanf("%d",&m3.marks2);

    printf("\nEnter student name =>");
    gets(m4.name);

    printf("\nEnter student roll number=>");
    scanf("%d",&m4.rollnumber);

    printf("\nEnter English marks=>");
    scanf("%d",&m4.marks1);

    printf("\nEnter Hindi marks=>");
    scanf("%d",&m4.marks2);


    printf("\nStudent name = %s student roll number = %d english marks = %s hindi marks = %s,", m1.name,m1.rollnumber,m1.marks1,m1.marks2);
    printf("\nStudent name = %s student roll number = %d english marks = %s hindi marks = %s,", m2.name,m2.rollnumber,m2.marks1,m2.marks2);
    printf("\nStudent name = %s student roll number = %d english marks = %s hindi marks = %s,", m3.name,m3.rollnumber,m3.marks1,m3.marks2);
    
}