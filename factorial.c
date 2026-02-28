#include<stdio.h>

int main()
{
    int number;
    int i;
    int factorial = 1;

    printf("\nenter a number to calculate its factorial : ");
    scanf("%d",&number);

    for(i=1 ;i<=number;i++)
    {
        factorial =  factorial * i ;
    }

    printf("\nfactorial of %d is : %d\n",number,factorial);

    return 0;
}
