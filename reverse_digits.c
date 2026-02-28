#include<stdio.h>

int main()
{
    int number;
    int temp;
    int reverse = 0;
    int remainder;

    printf("\nenter a number to reverse : ");
    scanf("%d",&number);

    temp = number ;

    while(temp>0)
    {
        remainder = temp % 10 ;

        reverse = (reverse * 10) + remainder;

        temp = temp/10 ;

    };

    printf("\nthe reverse of the digit %d is : %d\n\n",number,reverse);
    
    return 0;
}
