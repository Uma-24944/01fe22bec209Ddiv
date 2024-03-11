Code program to calculate the mileage remersument
#include<stdio.h>
int main()
{
    float i_reading,f_reading,mileage_remersument;
    printf("enter i_reading");
    scanf("%f",&i_reading);
    printf("enter f_reading");
    scanf("%f",&f_reading);
    mileage_remersument=(f_reading-i_reading)*18;
+-    printf("The mileage_remersument is %f",mileage_remersument);
    return 0;
