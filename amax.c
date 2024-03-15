/program to compute the max of 3/
#include<stdio.h>
int main()
{
    float x,y,z;//x,y,z are the no. given//
    printf("Enter the value of x,y,z\n");
    scanf("%f%f%f",&x,&y,&z);
    if(x>y&&x>z)
        printf("%f is maximum",x);
    else if (y>x&&y>z)
        printf("%f is maximum",y);
    else if (z>x&&z>y)
        printf("%f is maximum",z);
    return 0;
}
