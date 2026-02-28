#include<stdio.h>

int main()
{
    int number;
    int temp;
    int sum = 0;
    int remainder;

    printf("\nenter a number to add its digit : ");
    scanf("%d",&number);

    temp = number ;

    while(temp>0)
    {
        remainder = temp % 10 ;

        sum = sum + remainder ;

        temp = temp/10 ;

    };

    printf("\nthe sum of each digits of %d is : %d\n\n",number,sum);
    
    return 0;
}
