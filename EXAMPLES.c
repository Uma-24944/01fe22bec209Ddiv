include <stdio.h>
 int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


Hollow Square Star Pattern
Now, we create the hollow square star pattern. The source code for this pattern is given below:

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n||j==1||j==n)
            {
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}


Hollow Square Pattern with Diagonal
The code for the hollow square star pattern is given below:

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n||j==1||j==n-i+1||i==j||j==n)
            {
            printf("*");
            }
            else
            {

                      printf(" ");
                  }

            }
        printf("\n");
    }

    return 0;
}
Rhombus Star Pattern
The code for the rhombus star pattern is given below:

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

Right Triangle Star Pattern
The code for the right triangle star pattern is given below:

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
Mirrored Right Triangle Star Pattern
The code for the mirrored right triangle star pattern is given below:

#include <stdio.h>

int main()
{
    int n,m=1;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
          printf(" ");
        }
        for(int k=1;k<=m;k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
    return 0;
}
Inverted Right Triangle Star Pattern
The code for the inverted right triangle star pattern is given below:

#include <stdio.h>

int main()
{
    int n,m=1;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
      for(int j=1;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int array[100]; // Assuming maximum array size is 100
    int n; // Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Even numbers in the array: ");
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
#include<stdio.h>
#include<math.h>
typedef struct point
{
    int a,b;
}pt;
void read(pt*p);
void display(pt*p);
void display_quadrant(pt*p);
void compute(pt*p1,pt*p2);
main()
{
    pt a,b;
    pt *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("enter a,b of p1\n");
    read(ptr1);
    printf("enter a,b of p2\n");
    read(ptr2);
    printf(" point 1\n");
    display(ptr1);
    printf("point 2\n");
    display(ptr2);
    printf("1st pt quadrant is\n");
    display_quadrant(ptr1);
    printf("2st pt quadrant is\n");
    display_quadrant(ptr2);
    compute(ptr1,ptr2);

}
void read(pt*p)
{
    scanf("%d%d",&p->a,&p->b);
}
void display(pt*p)
{
    printf("%d%d",p->a,p->b);
}
void display_quadrant(pt*p)
{
    if(p->a>0 && p->b>0)
        printf("quadrant 1\n");
    else if(p->a<0 && p->b>0)
        printf("quadrant 2\n");
        else if(p->a<0 && p->b<0)
        printf("quadrant 3\n");
        else if(p->a>0 && p->b>0)
        printf("quadrant 4\n");

}
void compute(pt*p1,pt*p2)
{
    float d,s;
    {d=sqrt((pow((p2->a-p1->b),2))+(pow((p2->a-p1->b),2)));}
    printf("distance between the two points=%f",d);
    s=(float)(p2->b-p1->b)/(p2->a-p1->a);
    printf("slope between the points=%f",s);

}

#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);
    printf("Square of %d is %d\n", num, result);

    return 0;
}
#include <stdio.h>

int checkPrimeNumber(int number)
{
	int i, f = 1;

	for (i = 2; i <= number / 2; ++i)
	{
		if (number % i == 0)
		{
			f = 0;
			break;
		}
	}

	return f;
}


int main()
{
	int num1 = 2, num2 = 10, j, f;

	printf("Prime numbers between %d and %d are: ",
			num1, num2);
	for (j = num1; j < num2; ++j)
	{

		f = checkPrimeNumber(j);

		if (f == 1)
		{

			printf("%d ", j);
		}
	}

	return 0;
}
//prime num

#include <stdio.h>

// define a structure for complex number
typedef struct complexNumber {
    int real;
    int img;
} complex;

complex add(complex x, complex y);

int main()
{
    complex a, b, sum;
    a.real = 2;
    a.img = 3;
    b.real = 4;
    b.img = 5;
    printf("\n a = %d + %di", a.real, a.img);
    printf("\n b = %d + %di", b.real, b.img);

        sum = add(a, b);
    printf("\n sum = %d + %di", sum.real, sum.img);

    return 0;
}

complex add(complex x, complex y)
{

    complex add;

    add.real = x.real + y.real;

    add.img = x.img + y.img;

    return (add);
}
//complexnum

#include<stdio.h>
main()
{
    float F,C;
    printf("enter the temperature in F\n");
    scanf("%f",&F);
    C=(5/9.0*(F-32));

    if(C<0)
        printf("freezing\n");
    else if(0<=C&&C<10)
        printf("very cold\n");
    else if(10<=C&&C<20)
        printf("cold\n");
    else if(20<=C&&C<30)
        printf("normal\n");
    else if(30<=C&&C<40)
        printf("hot\n");
    else if(C>=40)
        printf("very hot\n");
    else
        printf("error in temperature");




}
#include<stdio.h>
main()
{
    char ch;
    printf("enter a character from the scanner");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("Capital letter\n");
    else if(ch>'a'&&ch<='z')
    printf("Small case letter\n");
    else if(ch>='0'&&ch<='9')
    printf("letter is a digit\n");
    else
    printf("Special symbol\n");
}
#include<stdio.h>
#include<stdlib.h>
main()
{
    int units;
    float bill;
    printf("enter the no of units\n");
    scanf("%d",units);
    if(unit>0 && unit<=50)
        bill=units*3.5;
    else if(units>50 && units<=150)
        bills=50*3.5+(units-50)*4;
    else if(units>150 && units<=250)
        bills=50*3.5+100*4+(units-100)*5.20;
    else if(units>250)
        bills=50*3.5+100*4+150*5.20+(unit-250)*6.5;
    else{
        printf("invalid units consumed\n")
    exit(0)
    }
            printf("total bill to be paid=%f\n",bills);

}
