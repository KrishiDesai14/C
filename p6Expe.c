
#include<stdio.h>
int main(){
    

    int maggie,sandwich,petrol,recharge;
    int total,avg;

    maggie=200;
    sandwich=500;
    petrol=1000;
    recharge=500;

    total=maggie+sandwich+petrol+recharge;
    avg=total/4;

    printf("\nTotal = %d",total);
    printf("\nAverage = %d",avg);
    printf("\n%d is total and %d is average",total,avg);
    
    return  0;

}