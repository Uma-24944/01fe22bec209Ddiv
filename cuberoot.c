#include<stdio.h>
int main()
{
    int num1,num2;
    char operation;
    float result;
    printf("Enter 2 numbers\n ");

    scanf("%d%d",&num1,&num2);
    printf("Enter the operation\n");
    scanf(" %c",&operation);
    switch(operation)
    {
        case'+': result=num1+num2;
                 printf("sum is %0.2f\n",result);
                 break;

        case'-': result=num1-num2;
                 printf("Subtraction is %0.2f\n",result);
                 break;

        case'*': result=num1*num2;
                 printf("Multiplication is %0.2f\n",result);
                 break;

        case'/': result=(float)num1/num2;
                 printf("Division is %0.2f\n",result);
                 break;

        default : printf("Invalid operation\n");
                  break;
    }

}
