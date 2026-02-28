#include<stdio.h>

 int main()
 {
    int array[10];
    int i;
    int j;
    int temp;
    int target;
    int middle;
    int low;
    int high;
    int length;
    int found = 0;

    //taking input from user

    printf("\nentering values to array\n\n");
    
    for(i=0;i<10;i++)
    {
      printf("enter value for index array[%d] : ",i);
      scanf("%d",&array[i]);
    }

    printf("\n\nenter a number to find in array : ");
    scanf("%d",&target);

    //sorting

    for(i=0;i<10;i++)
    {
       for(j=0;j<10;j++)
       {
         if( array[i] < array[j] )
         {

            temp = array[i];
            array[i] = array[j];
            array[j] = temp;

         }
       }
    }

    //printing array in ascending order

    printf("\n\nprinting array in ascending order : \n");

   for(i=0;i<10;i++)
      {
         printf("%d\t",array[i]);
      }

   //doing binary search

   length = sizeof(array) / sizeof(array[0]);
   
   printf("\n\nthe length of array is : %d \n",length);

   high = length - 1;
   low = 0;

   while(low <= high)
   {

      middle = low + (high - low) / 2;

      if(array[middle] == target)
      {
         printf("\ntarget found at index %d i.e array[%d] = %d\n\n",middle,middle,target);
         found = 1;
         break;
      }

      else if (array[middle] < target)
      {
         low = middle + 1 ;
      }

      else if (array[middle] > target)
      {
         high = middle - 1 ;
      }
   };

   if (found != 1)
   {
      printf("\ntarget not found in array...\n\n");
   }

    return 0;

 }