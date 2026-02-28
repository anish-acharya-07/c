#include<stdio.h>

int main()
{
    int array[10];
    int i,j;



    //taking input from user

    printf("\n\nentering values in array \n\n");

    for(i=0;i<10;i++)
    {
        printf("enter the value to index %d :",i);
        scanf("%d",&array[i]);
    }


    //temp variable to sort
    int temp;




         //sorting array in ascending order

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j]=temp;
            }
        }
    }



    //printing array in ascending order


    printf("\n\nprinting array in ascending order :\n");

     for(i=0;i<10;i++)
     {
        printf("%d \t",array[i]);
     }



     //sorting array in descending order

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j]=temp;
            }
        }
    }

    
    //printing array in descending order


    printf("\n\nprinting array in descending order :\n");

     for(i=0;i<10;i++)
     {
        printf("%d \t",array[i]);
     }
     

    printf("\n");


    return 0;
}