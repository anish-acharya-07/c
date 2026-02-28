#include<stdio.h>

int main()
{
    int array[10];
    int smallest_number;
    int largest_number;
    int i;


    printf("\n\nentering the numbers to the array \n\n");

    for(i=0;i<10;i++)
    {
        printf("enter the number for index %d : ",i);
        scanf("%d",&array[i]);

    }

    smallest_number = array[0];
    largest_number = array[0];

    for(i=0;i<10;i++)
    {
        if(smallest_number > array[i])
        {
            smallest_number = array[i];
        }
        
        if(largest_number < array[i])
        {
            largest_number = array[i];
        }
    }


    printf("\n\nthe largest_number is %d and the smallest_number is %d .\n\n",largest_number,smallest_number);


    return 0;
    
}