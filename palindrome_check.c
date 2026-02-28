#include<stdio.h>

int main()
{
    int number;
    int temp;
    int reverse = 0;
    int remainder;

    printf("\nenter a number check whether it is palindrome or not : ");

    scanf("%d",&number);

    temp = number ;

    while(temp>0)
    {
        remainder = temp % 10 ;

        reverse = (reverse * 10) + remainder;

        temp = temp/10 ;

    };

    if(number == reverse)
    {
      printf("\n%d is palindrome\n\n",number);
    }
    else
    {
      printf("\n%d is not palindrome\n\n",number);
    }
    
    return 0;
}
