#include<stdio.h>



int main()
{
    int n,sum=0;
    printf("Enter n value\n");
    scanf("%d",&n);
     int i;
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
    }
    printf("\nsum of natural numbers is %d\n",sum);



    return 0;
}
