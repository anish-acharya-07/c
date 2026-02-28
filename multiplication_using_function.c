#include<stdio.h>

void multiplication(int);

int main()
{
    int number;

    printf("\n\nenter a number to display it's multiplication table : ");
    scanf("%d",&number);

    printf("\n");

    if(number > 0)
    {
        multiplication(number);
    }
    else
    {
        printf("invalid number...\nnumber must be greater that 0 ");
    }

    printf("\n\n");

    return 0;
}

void multiplication(int number)
{
    int times;
    for(int i=1 ; i<=10 ; i++)
    {
        times = number * i;
        printf("%d * %d = %d\n",number,i,times);
    }

}