#include<stdio.h>
int addition(int *ptra,int *ptrb,int *ptrc);

int main()
{
    int a , b ,c , *ptra, *ptrb , *ptrc,sum;
    ptra=&a;
    ptrb=&b;
    ptrc=&c;
    printf("Enter 3 angles\n");
    scanf("%d%d%d",ptra,ptrb,ptrc);
    sum=addition(ptra,ptrb,ptrc);
    return 0;

}

int addition(int *ptra,int *ptrb,int *ptrc)
{
    int sum;
    sum=*ptra +*ptrb + *ptrc;
    if(sum==180)
        printf("Valid traingle\n");
    else
        printf("Invalid triangle\n");

    return sum;
}
