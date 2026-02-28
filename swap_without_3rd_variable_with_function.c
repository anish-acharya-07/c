#include<stdio.h>

void swap(int , int);

int main()
{
    int first_number;
    int second_number;

    printf("\n\nenter first number : ");
    scanf("%d",&first_number);

    printf("\nenter second number : ");
    scanf("%d",&second_number);

    printf("\nbefore swapping first_number = %d , second_number = %d \n",first_number,second_number);

    swap(first_number,second_number);

    return 0;
}

void swap(int first_number,int second_number)
{
    first_number = first_number + second_number;
    second_number = first_number - second_number;
    first_number = first_number - second_number;

    printf("\nafter swapping first_number = %d , second_number = %d \n\n",first_number,second_number);
}