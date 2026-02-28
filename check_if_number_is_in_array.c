#include<stdio.h>

int main()
{ 

    int array[10];
    int num;
    int found = 0;
    int i;


    printf("\n\nentering values to array\n\n");

    for(i=0 ; i<10 ; i++)
    {
        printf("enter value for index array[%d] : ",i);
        scanf("%d",&array[i]);
    }

    printf("\n\nenter a number to chcek whether the given number is in array or not : ");
    scanf("%d",&num);

    for (i=0 ; i<10 ; i++)
    {
        if(num==array[i])
        {
            found = 1 ;
        }
    }


    if(found == 1)
    {
        printf("\nthe given number (%d) is in array\n\n",num);
    }
    else
    {
        printf("\nthe given number (%d) is not in array\n\n",num);
    }
    


    return 0;
}
