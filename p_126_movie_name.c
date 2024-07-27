#include<stdio.h>
#include<string.h>
struct movie
{
    char mname[20];
    int release;
    char status[4];

};
main()
{
    struct movie m1,m2,m3;

    ptintf("\nEnter movie name =>");
    gets(m1.mname);

    ptintf("\nEnter release year=>");
    scanf("%d",&m1.release);

    fflush(stdin);
    printf("\nEnter movie status=>");
    gets(m1.status);

    fflush(stdin);
    printf("\nEnter movie name=>");
    gets(m2.mname);

    fflush(stdin);
    printf("\nEnter release year=>");
    scanf("%d",&m2.release);

    fflush(stdin);

    printf("\nEnter movie name=>");
    gets(m3.mname);

    ptintf("\nEnter release year=>");
    scanf("%d",&m3.release);

    fflush(stdin);
    printf("\nEnter movie status=>");
    gets(m3.status);

    printf("\nMovie name = %s Release year = %d Status = %s", m1.mname,m1.release,m1.status);
    printf("\nMovie name = %s Release year = %d Status = %s", m2.mname,m2.release,m2.status);
    printf("\nMovie name = %s Release year = %d Status = %s", m3.mname,m3.release,m3.status);


}