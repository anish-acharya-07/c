#include<stdio.h>

void prime_or_composite(int);

int main()
{
    int number;

    printf("\n\nenter a number to check whether the given number is prime or composite : ");
    scanf("%d",&number);

    prime_or_composite(number);

    return 0;
}


void prime_or_composite(int number)
{
    
    if(number == 1)
    {
        printf("\n%d is neither prime nor composite.\n\n",number);
    }
    else if (number <= 0)
    {
        printf("\ninvalid number...\nnumber should be greater than 0.\n\n");  
    }
    else
    {
        int prime = 1;

        for(int i = 2;i < number;i++)
        {
            if((number % i) == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 0)
        {
            printf("\nthe given number (%d) is composite.\n\n",number);
        }
        else
        {
            printf("\nthe given number (%d) is prime.\n\n",number);
        }

    }
    
}
