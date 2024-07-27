#include<stdio.h>
#include<string.h>
struct movie
{
    char mname[20];
    int release;
    char status[4];

};
int main()
{
    struct movie m[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
    fflush(stdin);
    printf("\nEnter movie name =>");
    gets(m[i].mname);

    printf("\nEnter release year=>");
    scanf("%d",&m[i].release);

    fflush(stdin);
    printf("\nEnter movie status=>");
    gets(m[i].status);
}
 
printf("\nMname\tRelease\tStatus");
printf("\n=======================");
for(i=0;i<n;i++)
{
    printf("\n%s\t%d\t%s", m[i].mname,m[i].release,m[i].status);
}

printf("\n=======================");

return 0;
}
