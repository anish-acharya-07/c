#include<stdio.h>

int main()
{
    int number;
    int *pointer;

    number = 10;

    pointer = &number;

    printf("%p\n",&number);
    printf("%p\n",pointer);
    printf("%d\n",number);
    printf("%d\n",*pointer);

    return 0;
}