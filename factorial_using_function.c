#include<stdio.h>

int factorial(int);


int main()
{
    int number;
    
    printf("\n\nenter a number to calculate its factorial : ");
    scanf("%d",&number);

    if(number >= 0)
    {
        printf("\nthe factorial of %d is : %d\n\n",number,factorial(number));
    }

    else
    {
        printf("\nfactorial isn't defined for negative number.\n\n");
    }

    return 0;
}


int factorial(int  number)
{
    int factorial = 1;

        for(int i = number ; i > 0 ; i--)
        {
            factorial = factorial * i ;
        }

    return factorial;
}