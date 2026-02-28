#include<stdio.h>

#define size 100

int main()
{
    char string[size];

    int length = 0;

    printf("\n\nenter a string to check it's length : ");
    scanf("%s",string);


    for(int i=0;i<size;i++)
    {
        if(string[i] != '\0')
        {
            length++;
        }
        else
        {
            break;
        }
    }

    printf("\nthe length of %s is %d\n\n",string,length);
    

    return 0;
}