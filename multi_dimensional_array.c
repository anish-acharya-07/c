#include<stdio.h>

int main()
{
    int array[3][3];
    int i,j;

    printf("entering values into array\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter value for index array[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }


    printf("\n\n");
     

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");

    return 0;
}