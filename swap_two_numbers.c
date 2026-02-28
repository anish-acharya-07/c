#include<stdio.h>

int main()
{
    int first_number;
    int second_number;

    printf("\n\nenter first number : ");
    scanf("%d",&first_number);

    printf("\nenter second number : ");
    scanf("%d",&second_number);

    printf("\nbefore swapping first_number = %d , second_number = %d \n",first_number,second_number);
    
    int temp;
    
    temp = first_number;
    first_number = second_number;
    second_number = temp;
    
    printf("\nafter swapping first_number = %d , second_number = %d \n\n",first_number,second_number);


    return 0;
}