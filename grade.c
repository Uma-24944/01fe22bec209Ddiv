#include<stdio.h>
//fun prototype
void count_grades(int n);

int main()
{
    int n;
    scanf("%d",&n);
    //fn call
    count_grades(n);
    return 0;
}
//fn definition
void count_grades(int n)
{
    int i,marks,f=0,e=0,d=0,c=0,b=0,a=0,s=0;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&marks);
        if(marks>=0&&marks<32)
            f++;
        else if(marks>=32&&marks<=40)
            e++;
        else if(marks>=41&&marks<=48)
            d++;
        else if(marks>=49&&marks<=56)
            c++;
        else if(marks>=57&&marks<=64)
            b++;
        else if(marks>=65&&marks<=72)
            a++;
        else
            s++;

    }
    printf("S grade=%d\n",s);
    printf("A grade=%d\n",a);
    printf("B grade=%d\n",b);
    printf("C grade=%d\n",c);
    printf("D grade=%d\n",d);
    printf("E grade=%d\n",e);
    printf("F grade=%d\n",f);
}
