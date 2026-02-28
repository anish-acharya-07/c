#include<stdio.h>

#define size 10

int main()
{   
    int array[size];

    int i,j;
    
    //taking input from user
    
    printf("\n\nentering elements in array\n\n");
    
    for(i=0;i<size;i++)
    {
        printf("enter elements for index array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    
    //bubble sort
    
    int temp;
    int swapped;

    for(i=0;i<size-1;i++)
    {
        swapped = 0;

        for(j=0 ; j< size-i-1 ;j++)
        {
            if(array[j+1] < array[j] )
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
        {
            break;
        }
    }


    //displaying sorted array

    printf("\n\nthe sorted array are : \n\n");

    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }

    printf("\n\n");

    return 0;
}