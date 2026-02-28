#include<stdio.h>

int factorial(int); 


int factorial(int number)
{
   if (number <= 1)
   {
    return 1;
   }

   else
   {
    return number * factorial(number - 1);
   }
}


int main()
{
    int number;

    printf("\n\nenter a number to calculate its factorial : ");
    scanf("%d",&number);

    printf("\nthe factorial of %d is : %d \n\n",number,factorial(number));

    return 0;
}

