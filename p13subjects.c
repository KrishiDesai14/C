#include<stdio.h>
int main(){
    
    float s1, s2, s3;
    
    printf("\nEnter Subject one marks=>");
    scanf("%f", &s1);

    printf("\nEnter Subject two marks=>");
    scanf("%f", &s2);

    printf("\nEnter Subject three marks=>");
    scanf("%f", &s3);
  
     printf("\nTotal marks is= %.2f", s1+s2+s3);

     if(s1+s2+s3 >50)
     {
        printf("\nYeh party time");
     }
     else{
        printf("\nCall to ur parents");
     }
    
 return  0;
}