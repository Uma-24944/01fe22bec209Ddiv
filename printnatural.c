//Modular C Program for printing natural numbers
#include<stdio.h>
//function prototype
void display_natural_nos(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    display_natural_nos(n);//function call
    return 0;
}

//function definition
void display_natural_nos(int n)
{
    int i=1;
    printf("The natural numbers are\n");
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}
