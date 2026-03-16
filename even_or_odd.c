
#include<stdio.h>
int main()
{
    int number;

    printf("\nenter a number : ");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("\n%d is even\n\n",number);
    }
    
    else
    {
        printf("\n%d is odd\n\n",number);
    }

    return 0;
}

