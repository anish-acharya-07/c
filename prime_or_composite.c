#include<stdio.h>

int main()
{
    int number;
    int i;
    int is_prime = 1;

    printf("\nenter a number ot check whether it is prime or composite : ");
    scanf("%d",&number);

        if (number <= 1)
    {
        printf("\n%d is neither prime nor composite\n", number);

        return 0;
    }

    for(i=2;i<number;i++)
    {
        if((number % i) == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if(is_prime == 1)
    {
        printf("\n%d is a prime number\n\n", number);
    }
    else
    {
        printf("\n%d is a composite number\n\n", number);
    }
    
    return 0;
}
