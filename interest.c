#include<stdio.h>
int main()
{
    int time;
    float amount,rate,si,total;
    printf("Enter the amount to deposit\n");
    scanf("%f",&amount);
    printf("Enter the rate of interest\n");
    scanf("%f",&rate);
    printf("Enter time in years\n");
    scanf("%d",&time);
    si = (amount*rate*time)/100;
    total=si+amount;
    printf("Simple interest is %0.2f\n",si);
    printf("Total amount is %0.2f\n",total);
    return 0;
}
