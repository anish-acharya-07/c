#include<stdio.h>

int reverse(int);

int main()
{
    int number;

    printf("\n\nenter a number to reverse it's digits : ");
    scanf("%d",&number);

    printf("\nthe reverse of %d is : %d\n\n",number,reverse(number));

    return 0;
}


int reverse(int number)
{
    int temp;
    int remainder;
    int reverse;

    temp = number ;

    while(temp != 0)
    {   
        remainder = temp % 10;
        reverse = (reverse * 10) + remainder;
        temp = temp / 10 ;
    };

    return reverse;
}
